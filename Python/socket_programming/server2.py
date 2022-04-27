import socket
import threading

#HEADER
#- initial length for header message.
HEADER = 64

#PORT
#- port number used by the server.
PORT = 5050

#SERVER
#- IP Address used by the server.
SERVER = socket.gethostbyname(socket.gethostname())

#ADDR
#- a tuple of SERVER and PORT.
ADDR = (SERVER, PORT)

#FORMAT
#- text-encoding format to be used.
FORMAT = 'utf-8'

#DISCONNECT_MSG
#- predefined command used to disconnect the client from the server.
DISCONNECT_MESSAGE = "!disconnect"

# socket.AF_INET - socket uses an IPv4 address
# socket.SOCK_STREAM - it is a TCP socket
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind(ADDR)


def handle_client(conn, addr):
    """ Handles the client-server communication process. """

    print(f"[SERVER] A new connection has been established from {addr}")
    while True:
        """ It will first get the header that will determine the size of the 
        incoming message."""
        msg_length = conn.recv(HEADER).decode(FORMAT)
        if msg_length:
            msg_length = int(msg_length)
            msg = conn.recv(msg_length).decode(FORMAT)
            print(f"[{addr[0]}:{addr[1]}] > {msg}")

            # Checks if the client enters the following commands:
            if msg == DISCONNECT_MESSAGE:
                print(f"[SERVER] Client {addr} has disconnected.")
                break
            elif msg == "!ping":
                conn.send("[SERVER] Pong!".encode(FORMAT))

            # Send an acknowledgement reply to the client
            conn.send("[SERVER] Message has been received.".encode(FORMAT))

    conn.close()


def start():
    """ Starts the server and creates a new thread 
    whenever a connection from the client has been established """

    server.listen()
    print(f"[SERVER] Listening on {SERVER}:{PORT}")
    while True:
        conn, addr = server.accept()
        thread = threading.Thread(target=handle_client, args=(conn, addr))
        thread.start()


print("[SERVER] Server is starting...")
start()