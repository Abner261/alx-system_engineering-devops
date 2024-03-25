### Network Programming (Engineering) University Assignment

#### Instructions

- You are supposed write two separate `TCP socket programs` that implements both `Client/Server`
parts of a communication such that `Client` will send two integers and `Server` will reply with the
sum of those integers. In your programs you should clearly indicate the header files that are used

### Questions

- [1] Write the `client_add.c` client program that take the two integers as an argument input to the
program or in run-time from the user. After receiving the reply of the Server, Client will
show the user final result. You can use `sprintf()` function to convert an integer to a string, and
use `atoi()` function to convert a string to an integer

- [2] Write the `server_add.c` server program that replies with the sum of numbers received from
the client program. The server process should work in connection-oriented and concurrent- server mode

- [3] At the terminal, indicate how the two programs are compiled, build and execute
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
