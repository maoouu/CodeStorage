import socket

s = socket.socket()
host = socket.gethostname()
port = 12345
print(f"Starting server on port {port}...")
s.bind((host, port))
print(f"Server started.")

s.listen(3)
print("Listening for connections...")
while True:
    c, addr = s.accept()
    encode = 'utf-8'
    console = c.recv(1024).decode()
    print("Connection established from ", addr)
    c.send(bytes("Welcome to the server!", encode))
    c.close()
