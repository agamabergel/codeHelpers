from socket import recv

def recvall(sock: socket.socket) -> str:
    BUFF_SIZE = 1024 * 2
    data = b""

    while True:
        chunk = sock.recv(BUFF_SIZE)
        if not chunk: break 
        data += chunk

    return data
