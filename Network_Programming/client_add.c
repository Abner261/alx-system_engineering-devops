#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8080

/**
 * client_add.c - A Client program that sends two integers to the server and displays the sum received
 */


int main(int argc, char *argv[]) {
    // Test sprintf() function
    int num1 = 123;
    int num2 = -456;
    char str1[20];
    char str2[20];

    sprintf(str1, "%d", num1);
    sprintf(str2, "%d", num2);

    printf("Integer 1 as string: %s\n", str1);
    printf("Integer 2 as string: %s\n", str2);

    // Test atoi() function
    char str3[] = "789";
    char str4[] = "-1011";

    int num3 = atoi(str3);
    int num4 = atoi(str4);

    printf("String 3 as integer: %d\n", num3);
    printf("String 4 as integer: %d\n", num4);

    if (argc != 3) {
        printf("Usage: %s <integer1> <integer2>\n", argv[0]);
        return (1);
    }

    int sockfd;
    struct sockaddr_in serv_addr;
    char buffer[1024] = {0};

    // Create socket
    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("Socket creation error");
        return (1);
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        perror("Invalid address/ Address not supported");
        return (1);
    }

    // Connect to server
    if (connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection failed");
        return (1);
    }

    // Send data to server
    char send_data[20];
    sprintf(send_data, "%s %s", argv[1], argv[2]);
    send(sockfd, send_data, strlen(send_data), 0);

    // Receive result from server
    read(sockfd, buffer, 1024);
    printf("Sum received from server: %s\n", buffer);

    close(sockfd);
    return (0);
}

