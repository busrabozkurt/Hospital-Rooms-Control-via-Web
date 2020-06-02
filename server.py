
import http.server,socketserver,logging,serial,time 
from io import BytesIO
import numpy as np
loginsuccess=False
serilk= serial.Serial(
    port = '/dev/ttyUSB0',
    baudrate = 9600,
    parity = serial.PARITY_NONE,
    stopbits = serial.STOPBITS_ONE,
    bytesize = serial.EIGHTBITS,
    timeout = 1
)
seriki= serial.Serial(
    port = '/dev/ttyUSB1',
    baudrate = 9600,
    parity = serial.PARITY_NONE,
    stopbits = serial.STOPBITS_ONE,
    bytesize = serial.EIGHTBITS,
    timeout = 1
)
time.sleep(1)
def oku():
    rstr=""
    data = np.genfromtxt("data"+".txt", delimiter='/n',dtype=np.uint8)
    for x in range(0,len(data)): 
        rstr+= "<LED>"+str(data[x])+"</LED>"+"\r\n"   
    data = "<?xml version='1.0' encoding='utf-8'?>"+"<input>"+"\r\n"+ rstr +"<sfr>veli</sfr>"+"\r\n"+"</input>" 
    return data
def yaz(gelen):
    strs=""
    print("ilkstrs:")
    print(type(strs))
    #strs = ["" for x in range(len(gelen))]
    #print(type(dene))
    file = open("data.txt","w")
    for x in range(0,len(gelen)): 
        file.write(str(gelen[x])+"\n")
    #for x in range(0,75):
	#if(gelen[x] == "1"):
	#    strs = strs +"y"
	#else if(gelen[x] == "0"):
	#    strs = strs +"s"
   #ser1= serial.Serial('/dev/ttyUSB1', 9600, timeout=1)
    portac()
    #ser0.flush()
    #ser1.flush()ü
    print(gelen)
    serilk.write(gelen.encode('utf-8'))
    time.sleep(1)
    seriki.write(gelen.encode('utf-8'))
    time.sleep(1)
    print("serialler yazildi")
    #ser1.write(strs.encode('utf-8'))
    #time.sleep(0.5)

class MyHttpRequestHandler(http.server.SimpleHTTPRequestHandler):
   
    def _set_response(self):
        self.send_response(200)
        self.send_header('Content-type', 'text/html')
        self.end_headers()

    def do_GET(self):
        
        if self.path == '/index.htm':
            self.path = 'index.htm'
        if (self.path == '/izosayfa.htm') and loginsuccess:
            print("geldigeldi"+loginsuccess)
            self.path = 'izosayfa.htm'

        #response.write(body)
        #if(yol=="izogonder")

        return http.server.SimpleHTTPRequestHandler.do_GET(self)
    def do_POST(self):
        content_length = int(self.headers['Content-Length']) # <--- Gets the size of data
        body = self.rfile.read(content_length)
       # yol=self.path.split('/')
        self.send_response(200)
        self.end_headers()
        response = BytesIO()
        print("post a girdi") 
        sfr = body.decode().split("sifre=")[1].split('/')[0]
        print('sfr:'+sfr)
        if sfr == "password":
            response.write(b'success')
            self.wfile.write(response.getvalue())
            print(response.getvalue().decode())

        if sfr == "getdatakey":
            print("xml gonderiyor")
            dene=oku().encode()
            print(oku())
            response.write(dene)
            #response.write(body)
            self.wfile.write(response.getvalue())
            #self.wfile.write("POST request for {}".format(self.path).encode('utf-8'))
        if sfr == "refreshkey":
            print("kontrol edilecek")
            gelen= body.decode().split("guncelle/")[1].split('/')[0]
            print(gelen[0])
            print(gelen[1])
            print(gelen)
            print(type(gelen))
            yaz(gelen)
            response.write(b'iso')
            self.wfile.write(response.getvalue())
# Create an object of the above class
handler_object = MyHttpRequestHandler
PORT = 80
IP ="0.0.0.0"
my_server = socketserver.TCPServer((IP, PORT), handler_object)
# Star the server

try:
    print(PORT)
    my_server.serve_forever()
    
except Exception:
    my_server.server_close()
my_server.server_close()
