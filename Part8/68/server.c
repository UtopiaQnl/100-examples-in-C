#include <memory.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define SERVER_PORT 6800
#define BUF_SIZE    64
#define MSG_TO_SEND "Version\n"

int main(void)
{
    int sock1, sock2;
    size_t id_client = 0;
    char buffer[BUF_SIZE];
    struct sockaddr_in sin, client;

    sock1 = socket(AF_INET, SOCK_STREAM, 0);
    memset((char *)&sin, '\0', sizeof(sin));

    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = INADDR_ANY;
    sin.sin_port = SERVER_PORT;

    int status = bind(sock1, (struct sockaddr *)&sin, sizeof(sin));

    puts("Server runing..");

    listen(sock1, 5);

    while (true) {
        size_t client_answer_len = sizeof(client);
        sock2 = accept(sock1, (struct sockaddr *)&client, (socklen_t *)&client_answer_len);
        write(sock2, MSG_TO_SEND, sizeof(MSG_TO_SEND));
        id_client++;
        client_answer_len = read(sock2, buffer, BUF_SIZE);
        write(1, buffer, client_answer_len);
        printf("Client no %zu\n", id_client);
        shutdown(sock2, 0);
        close(sock2);
    }

    return EXIT_SUCCESS;
}
