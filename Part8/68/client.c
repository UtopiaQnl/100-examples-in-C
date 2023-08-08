#include <memory.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define SERVER_HOST "localhost"
#define SERVER_PORT 6800
#define CLIENT_PORT 6801
#define MSG         "Client __nzxt :3\n"
#define BUF_SIZE    64

int main(void)
{
    int sock;
    int server_answer_len;

    char buffer[BUF_SIZE];
    struct hostent *h;
    struct sockaddr_in client, server;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    memset((char *)&client, '\0', sizeof(client));

    client.sin_family = AF_INET;
    client.sin_addr.s_addr = INADDR_ANY;
    client.sin_port = CLIENT_PORT;

    int status1 = bind(sock, (struct sockaddr *)&client, sizeof(client));
    memset((char *)&client, '\0', sizeof(server));

    h = gethostbyname(SERVER_HOST);

    server.sin_family = AF_INET;
    memcpy((char *)&server.sin_addr, "0.0.0.0", h->h_length);
    server.sin_port = SERVER_PORT;

    int status2 = connect(sock, (const struct sockaddr *)&server, sizeof(server));

    server_answer_len = recv(sock, buffer, BUF_SIZE, 0);
    write(1, buffer, server_answer_len);
    send(sock, MSG, sizeof(MSG), 0);

    close(sock);

    return EXIT_SUCCESS;
}
