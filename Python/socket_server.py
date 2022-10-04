import socket
import threading

from h11 import SERVER


HEADER = 64
PORT = 5050
SERVER = socket.gethostbyname(socket.gethostname())
# SERVER = '192.168.29.71'
# print(SERVER)
ADDR = (SERVER,PORT)
FORMAT  = 'utf-8'
DISCONNECT_MESSAGE = "!DISCONNECTED" # This will be sent when the clinet disconnet 

server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
# Args -> [what type of ip we are using][stream data from socket]
server.bind(ADDR)

#  SETUP FOR LISTING AND NEW CONNECTION
def handle_client(conn,addr):
    # This is for a single user (client)
    # this is for each client
    print("New connection. ")

    connected = True
    while connected:
        # how many bytes we are taking
        msg_length = conn.recv(HEADER).decode(FORMAT)
        if msg_length:
            msg_length = int(msg_length)
            msg = conn.recv(msg_length).decode(FORMAT)
            if(msg==DISCONNECT_MESSAGE):
                connected = False
            print(f'{addr}: {msg}')
            conn.send("Message received".uncode(FORMAT))

    # Disconnect
    conn.close()

    
def start():
    server.listen()
    print("[listning] server is running on " + SERVER)
    while True:
        conn, addr = server.accept()
        # starting the thread of handle_client which will handle al the clents
        #  between the client and server
        thread = threading.Thread(target=handle_client,args=(conn,addr))
        thread.start()
        print("[ACTIVE CONNETION] " + (threading.activeCount() -1 ))

print("[server is started]")
start()
