### Network Programming (Engineering) University Assignment

#### Instructions

- You are supposed write two separate `TCP socket programs` that implements both `Client/Server`
parts of a communication such that `Client` will send two integers and `Server` will reply with the
sum of those integers. In your programs you should clearly indicate the header files that are used

### Questions

1. [client_add.c](./client_add)

- Write the `client_add.c` client program that take the `two` integers as an argument input to the
program or in run-time from the user. After receiving the reply of the Server, Client will
show the user final result. You can use `sprintf()` function to convert an integer to a string, and
use `atoi()` function to convert a string to an integer

* **Client Program (client_add.c):**

	- The client program will establish a connection with the server and send two integers
	- It will receive the sum of those integers from the server and display the result to the user
	- Required header files: `stdio.h`, `stdlib.h`, `unistd.h`, `string.h`, `sys/socket.h`, `netinet/in.h`, `arpa/inet.h`

* **Repo:**
	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `Network_Programming`
	- File: `client_add.c`

2. [server_add.c](./server_add)

- Write the `server_add.c` server program that replies with the `sum` of numbers received from
the client program. The server process should work in connection-oriented and concurrent- server mode

* **Server Program (server_add.c):*8

	- The server program will wait for connections from clients and receive two integers from each client
	- It will calculate the sum of the received integers and send the result back to the client
	- The server will be designed to handle multiple clients concurrently
	- Required header files: `stdio.h`, `stdlib.h`, `unistd.h`, `string.h`, `sys/socket.h`, `netinet/in.h`

* **Repo:**
	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `Network_Programming`
	- File: `server_add.c`

- [3] At the terminal, indicate how the two programs are compiled, build and execute

* **Compilation and Execution:**

	- Both programs can be compiled using a C compiler like `gcc`. 
```sh
gcc -o client_add client_add.c
gcc -o server_add server_add.c
```

* They can be executed using the respective compiled binaries

```sh
./client_add <integer1> <integer2>
./server_add
```
* The client program takes two integers as command-line arguments, while the server program does not require any arguments


```sh
root@e1714dc5a3c9:~/alx-system_engineering-devops/Network_Programming# ls
client_add.c  README.md  server_add.c
root@e1714dc5a3c9:~/alx-system_engineering-devops/Network_Programming# gcc -o client_add client_add.c 
root@e1714dc5a3c9:~/alx-system_engineering-devops/Network_Programming# ls
client_add  client_add.c  README.md  server_add.c
root@e1714dc5a3c9:~/alx-system_engineering-devops/Network_Programming# gcc -o server_add server_add.c 
root@e1714dc5a3c9:~/alx-system_engineering-devops/Network_Programming# ls
client_add  client_add.c  README.md  server_add  server_add.c
root@e1714dc5a3c9:~/alx-system_engineering-devops/Network_Programming#
```
- [4] At the terminal, `use netstat` to indicate how TCP connection, establishment and termination
are achieved. What are the various TCP states

```sh
root@Engineer:/mnt/c/Windows/system32# netstat -ant
Active Internet connections (servers and established)
Proto Recv-Q Send-Q Local Address           Foreign Address         State
tcp        0      0 127.0.0.53:53           0.0.0.0:*               LISTEN
tcp        0      0 172.25.249.49:34168     41.206.102.35:80        TIME_WAIT
root@Engineer:/mnt/c/Windows/system32#
```
