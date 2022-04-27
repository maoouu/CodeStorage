import socket
import threading

HEADER = 64
PORT = 5050
SERVER = "192.168.56.1"
ADDR = (SERVER, PORT)
FORMAT = 'utf-8'
DISCONNECT_MESSAGE = "!disconnect"

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(ADDR)


def send(msg):
    """ Sends the message to the server """

    message = msg.encode(FORMAT)
    msg_length = len(message)
    send_length = str(msg_length).encode(FORMAT)
    send_length += b' ' * (HEADER - len(send_length))
    client.send(send_length)
    client.send(message)

    # Get acknowledgement from the server
    print(client.recv(HEADER).decode(FORMAT))


def start():
    print(f"Client is connected to server ({SERVER}:{PORT})")
    while True:
        # Serves as a console to communicate to the server.
        user_input = str(input("> "))
        user_input = user_input.strip()
        send(user_input)

        if user_input == DISCONNECT_MESSAGE:
            print("You have disconnected from the server. Exiting...")
            break


print("Client is starting...")
start()