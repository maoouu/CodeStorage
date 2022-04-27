import socket

c = socket.socket()
host = socket.gethostname()
port = 12345
encode = 'utf-8'

c.connect((host, port))
print(c.recv(1024).decode())
c.close()
