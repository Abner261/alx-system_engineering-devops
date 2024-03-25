#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8080

int main() {
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

    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    int valread;

    // Create socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    // Bind socket to address and port
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    // Listen for incoming connections
    if (listen(server_fd, 3) < 0) {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }

    while (1) {
        // Accept connection
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
            perror("Accept failed");
            exit(EXIT_FAILURE);
        }

        // Read data from client
        valread = read(new_socket, buffer, 1024);
        int num1, num2;
        sscanf(buffer, "%d %d", &num1, &num2);

        // Calculate sum
        int sum = num1 + num2;
        char send_data[20];
        sprintf(send_data, "%d", sum);

        // Send sum back to client
        send(new_socket, send_data, strlen(send_data), 0);

        printf("Sum sent to client: %d\n", sum);

        close(new_socket);
    }

    return 0;
}

