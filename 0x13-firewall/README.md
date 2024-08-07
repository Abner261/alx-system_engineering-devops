## 0x13. Firewall

![DevOps](https://img.shields.io/badge/DevOps-red)
![SysAdmin](https://img.shields.io/badge/SysAdmin-red)
![Security](https://img.shields.io/badge/Security-red)

### Concepts

* For this project, we expect you to look at this concept:

### 1. Web stack debugging

### Intro

Debugging usually takes a big chunk of a software engineer’s time. The art of debugging is tough and it takes years, even decades to master, and that is why seasoned software engineers are the best at it… experience. They have seen lots of broken code, buggy systems, weird edge cases and race conditions.

![Knowledge vs Experience](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/bbad30153b9b818fe6c99512aa80f551c11e1572/0x0D-web_stack_debugging_0/Knowledge%20vs%20Experience.png)

## Non-exhaustive guide to debugging

### School specific

If you are struggling to get something right that is run on the checker, like a Bash script or a piece of code, keep in mind that you can simulate the flow by starting a Docker container with the distribution that is specified in the requirements and by running your code. Check the **Docker** concept page for more info.

### Test and verify your assumptions

The idea is to ask a set of questions until you find the issue. For example, if you installed a web server and it isn’t serving a page when browsing the IP, here are some questions you can ask yourself to start debugging:

- Is the web server started? - You can check using the service manager, also double check by checking process list.
- On what port should it listen? - Check your web server configuration
- Is it actually listening on this port? - `netstat -lpdn` - run as `root` or `sudo` so that you can see the process for each listening port
- It is listening on the correct server IP? - `netstat` is also your friend here
- Is there a firewall enabled?
- Have you looked at logs? - usually in `/var/log` and `tail -f` is your friend
- Can I connect to the HTTP port from the location I am browsing from? - `curl` is your friend

There is a good chance that at this point you will already have found part of the issue.

### Get a quick overview of the machine state

[Youtube video First 5 Commands When I Connect on a Linux Server](https://www.youtube.com/watch?v=1_gqlbADaAw)

When you connect to a server/machine/computer/container you want to understand what’s happened recently and what’s happening now, and you can do this with [5 commands](https://www.linux.com/training-tutorials/first-5-commands-when-i-connect-linux-server/) in a minute or less:

`w`

- shows server [uptime](https://www.techtarget.com/whatis/definition/uptime-and-downtime) which is the time during which the server has been continuously running
- shows which users are connected to the server
- load average will give you a good sense of the server health - (read more about load [here](https://scoutapm.com/blog/understanding-load-averages) and [here](https://www.brendangregg.com/blog/2017-08-08/linux-load-averages.html))

`history`

- shows which commands were previously run by the user you are currently connected to
- you can learn a lot about what type of work was previously performed on the machine, and what could have gone wrong with it
- where you might want to start your debugging work

`top`

- shows what is currently running on this server
- order results by CPU, memory utilization and catch the ones that are resource intensive

`df`

- shows disk utilization

`netstat`

- what port and IP your server is listening on
- what processes are using sockets
- try `netstat -lpn` on a Ubuntu machine

### Machine

Debugging is pretty much about verifying assumptions, in a perfect world the software or system we are working on would be working perfectly, the server is in perfect shape and everybody is happy. But actually, it NEVER goes this way, things ALWAYS fail (it’s tremendous!).

For the machine level, you want to ask yourself these questions:

- Does the server have free disk space? - `df`
- Is the server able to keep up with CPU load? - `w`, `top`, `ps`
- Are the server disk(s) able to keep up with read/write IO? - `htop`

If the answer is **no** for any of these questions, then that might be the reason why things are not going as expected. There are often 3 ways of solving the issue:

- free up resources (stop process(es) or reduce their resource consumption)
- increase the machine resources (adding memory, CPU, disk space…)
- distributing the resource usage to other machines

### Network issue

For the machine level, you want to ask yourself these questions:

- Does the server have the expected network interfaces and IPs up and running? `ifconfig`
- Does the server listen on the sockets that it is supposed to? `netstat` (`netstat -lpd` or `netstat -lpn`)
- Can you connect from the location you want to connect from, to the socket you want to connect to? `telnet` to the IP + PORT (`telnet 8.8.8.8 80`)
* Does the server have the correct firewall rules? `iptables`, `ufw`:

        - `iptables -L`
        - `sudo ufw status`

### Process issue

If a piece of Software isn’t behaving as expected, it can obviously be because of above reasons… but the good news is that there is more to look into (there is ALWAYS more to look into actually).

* Is the software started? `init`, `init.d`:

        - `service NAME_OF_THE_SERVICE status`
        - `/etc/init.d/NAME_OF_THE_SERVICE status`

* Is the software process running? `pgrep`, `ps`:

        - pgrep -lf NAME_OF_THE_PROCESS
        - ps auxf

* Is there anything interesting in the logs? look for log files in `/var/log/` and `tail -f` is your friend

### Debugging is fun

Debugging can be frustrating, but it will definitely be part of your job, it requires experience and methodology to become good at it. The good news is that bugs are never going away, and the more experienced you become, trickier bugs will be assigned to you! Good luck :)

![debugging is fun](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/0658234f2351d6672980f1465d1cf132fea79af6/0x0D-web_stack_debugging_0/Debugging.gif)

![Network setup diagram for firewall configuration](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/bc9eb5f67d8acf3edf2c106698f870bedc687874/0x13-firewall/Firewall.png)

### Background Context

### Your servers without a firewall…

![servers without a firewall](https://github.com/Abner261/alx-system_engineering-devops/blob/master/0x13-firewall/holbertonschool-firewall.gif?raw=true)

### Resources

**Read or watch:**

- [What is a firewall](https://en.wikipedia.org/wiki/Firewall_%28computing%29)

### More Info

As explained in the **web stack debugging guide** concept page, `telnet` is a very good tool to check if sockets are open with `telnet IP PORT`. For example, if you want to check if port 22 is open on `web-02`:

```sh
sylvain@ubuntu$ telnet web-02.holberton.online 22
Trying 54.89.38.100...
Connected to web-02.holberton.online.
Escape character is '^]'.
SSH-2.0-OpenSSH_6.6.1p1 Ubuntu-2ubuntu2.8

Protocol mismatch.
Connection closed by foreign host.
sylvain@ubuntu$
```

We can see for this example that the connection is successful: `Connected to web-02.holberton.online.`

Now let’s try connecting to port 2222:

```sh
sylvain@ubuntu$ telnet web-02.holberton.online 2222
Trying 54.89.38.100...
^C
sylvain@ubuntu$
```

We can see that the connection never succeeds, so after some time I just use `ctrl+c` to kill the process.

This can be used not just for this exercise, but for any debugging situation where two pieces of software need to communicate over sockets.

Note that the school network is filtering outgoing connections (via a network-based firewall), so you might not be able to interact with certain ports on servers outside of the school network. To test your work on `web-01`, please perform the test from outside of the school network, like from your `web-02` server. If you SSH into your `web-02` server, the traffic will be originating from `web-02` and not from the school’s network, bypassing the firewall.

### Warning!

Containers on demand cannot be used for this project (Docker container limitation)

Be very careful with firewall rules! For instance, if you ever deny port `22/TCP` and log out of your server, you will not be able to reconnect to your server via SSH, and we will not be able to recover it. When you install UFW, port 22 is blocked by default, so you should unblock it immediately before logging out of your server

### Your servers

Name	     |	Username    |	IP   |	State	    |
-------------|--------------|--------|--------------|
132436-web-01|		    |	     |		    |
132436-web-02|		    |	     |		    |
132436-lb-01 |		    |	     |		    |

## Tasks

0. [Block all incoming traffic but](0-block_all_incoming_traffic_but)

Let’s install the `ufw` firewall and setup a few rules on `web-01`.

Requirements:

- The requirements below must be applied to `web-01` (feel free to do it on `lb-01` and `web-02`, but it won’t be checked)
* Configure `ufw` so that it blocks all incoming traffic, except the following TCP ports:
	- `22` (SSH)
	- `443` (HTTPS SSL)
	- `80` (HTTP)

Share the `ufw` commands that you used in your answer file

**Repo:**

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x13-firewall`
- File: `0-block_all_incoming_traffic_but`

1. [Port forwarding](100-port_forwarding)

Firewalls can not only filter requests, they can also forward them.

Requirements:

- Configure `web-01` so that its firewall redirects port `8080/TCP` to port `80/TCP`.
- Your answer file should be a copy of the `ufw` configuration file that you modified to make this happen

Terminal in `web-01`:

```sh
root@03-web-01:~# netstat -lpn
Active Internet connections (only servers)
Proto Recv-Q Send-Q Local Address           Foreign Address         State       PID/Program name
tcp        0      0 0.0.0.0:80              0.0.0.0:*               LISTEN      2473/nginx
tcp        0      0 0.0.0.0:22              0.0.0.0:*               LISTEN      978/sshd
tcp6       0      0 :::80                   :::*                    LISTEN      2473/nginx
tcp6       0      0 :::22                   :::*                    LISTEN      978/sshd
udp        0      0 0.0.0.0:68              0.0.0.0:*                           594/dhclient
udp        0      0 0.0.0.0:54432           0.0.0.0:*                           594/dhclient
udp6       0      0 :::32563                :::*                                594/dhclient
Active UNIX domain sockets (only servers)
Proto RefCnt Flags       Type       State         I-Node   PID/Program name    Path
unix  2      [ ACC ]     SEQPACKET  LISTENING     7175     433/systemd-udevd   /run/udev/control
unix  2      [ ACC ]     STREAM     LISTENING     6505     1/init              @/com/ubuntu/upstart
unix  2      [ ACC ]     STREAM     LISTENING     8048     741/dbus-daemon     /var/run/dbus/system_bus_socket
unix  2      [ ACC ]     STREAM     LISTENING     8419     987/acpid           /var/run/acpid.socket
root@03-web-01:~#
root@03-web-01:~# grep listen /etc/nginx/sites-enabled/default
    listen 80 default_server;
    listen [::]:80 default_server ipv6only=on;
    # pass the PHP scripts to FastCGI server listening on 127.0.0.1:9000
#   listen 8000;
#   listen somename:8080;
#   listen 443;
root@03-web-01:~#
```

- My web server `nginx` is only listening on port `80`
- `netstat` shows that nothing is listening on `8080`

Terminal in `web-02`:

```sh
ubuntu@03-web-02:~$ curl -sI web-01.holberton.online:80
HTTP/1.1 200 OK
Server: nginx/1.4.6 (Ubuntu)
Date: Tue, 07 Mar 2017 02:14:41 GMT
Content-Type: text/html
Content-Length: 612
Last-Modified: Tue, 04 Mar 2014 11:46:45 GMT
Connection: keep-alive
ETag: "5315bd25-264"
Accept-Ranges: bytes

ubuntu@03-web-02:~$ curl -sI web-01.holberton.online:8080
HTTP/1.1 200 OK
Server: nginx/1.4.6 (Ubuntu)
Date: Tue, 07 Mar 2017 02:14:43 GMT
Content-Type: text/html
Content-Length: 612
Last-Modified: Tue, 04 Mar 2014 11:46:45 GMT
Connection: keep-alive
ETag: "5315bd25-264"
Accept-Ranges: bytes

ubuntu@03-web-02:~$
```

I use curl to query `web-01.holberton.online`, and since my firewall is forwarding the ports, I get a `HTTP 200` response on port `80/TCP` and also on port `8080/TCP`.

**Repo:**

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x13-firewall`
- File: `100-port_forwarding`
