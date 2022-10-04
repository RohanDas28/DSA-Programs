from pydoc import cli
import socket


HEADER = 64
PORT = 5050
SERVER = '120.0.0.1'
FORMAT  = 'utf-8'
DISCONNECT_MESSAGE = "!DISCONNECTED" 
ADDR = (SERVER,PORT)

client = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

# connect to server
client.connect(ADDR)

def send(msg):
    message = msg.encode(FORMAT)
    msg_length = len(message)
    send_length = str(msg_length).encode(FORMAT)
    send_length += b'' * (HEADER - len(send_length))
    client.send(send_length)
    client.send(message)
    print(client.recv(2048).decode(FORMAT))


send("Hello4")
send("Hello1")
send("Hello2")
send("Hello3")
send(DISCONNECT_MESSAGE)
