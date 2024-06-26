## 0x0E. Web stack debugging #1

### Concepts

* **For this project, we expect you to look at these concepts:**

### [1] Network basics

* Networking is a big part of what made computers so powerful and why the Internet exists. It allows machines to communicate with each other.

	- [What is a protocol](https://www.techtarget.com/searchnetworking/definition/protocol)
	- [What is an IP address](https://computer.howstuffworks.com/internet/basics/what-is-an-ip-address.htm)
	- [What is TCP/IP](https://www.avast.com/c-what-is-tcp-ip#)
	- [What is an Internet Protocol (IP) port?](https://www.lifewire.com/port-numbers-on-computer-networks-817939)

### [2] Web stack debugging

* **Intro**

	- Debugging usually takes a big chunk of a software engineer’s time. The art of debugging is tough and it takes years, even decades to master, and that is why seasoned software engineers are the best at it… experience. They have seen lots of broken code, buggy systems, weird edge cases and race conditions

![Knowledge vs Experience](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/565180aa5ab47c5e91dd7b5ad0c1056914a24e30/0x0E-web_stack_debugging_1/Knowledge%20vs%20Experience.png)

### Non-exhaustive guide to debugging

* **School specific**

	- If you are struggling to get something right that is run on the checker, like a Bash script or a piece of code, keep in mind that you can simulate the flow by starting a Docker container with the distribution that is specified in the requirements and by running your code. Check the **Docker** concept page for more info.

### Test and verify your assumptions

* The idea is to ask a set of questions until you find the issue. For example, if you installed a web server and it isn’t serving a page when browsing the IP, here are some questions you can ask yourself to start debugging:

	- Is the web server started? - You can check using the service manager, also double check by checking process list.
	- On what port should it listen? - Check your web server configuration
	- Is it actually listening on this port? - `netstat -lpdn` - run as `root` or `sudo` so that you can see the process for each listening port
	- It is listening on the correct server IP? - `netstat` is also your friend here
	- Is there a firewall enabled?
	- Have you looked at logs? - usually in `/var/log` and `tail -f` is your friend
	- Can I connect to the HTTP port from the location I am browsing from? - `curl` is your friend

There is a good chance that at this point you will already have found part of the issue

### Get a quick overview of the machine state

[Youtube video First 5 Commands When I Connect on a Linux Server](https://www.youtube.com/watch?v=1_gqlbADaAw)

When you connect to a server/machine/computer/container you want to understand what’s happened recently and what’s happening now, and you can do this with [5 commands](https://www.linux.com/training-tutorials/first-5-commands-when-i-connect-linux-server/) in a minute or less:

* **w**

	- shows server [uptime](https://www.techtarget.com/whatis/definition/uptime-and-downtime) which is the time during which the server has been continuously running
	- shows which users are connected to the server
	- load average will give you a good sense of the server health - (read more about load [here](https://scoutapm.com/blog/understanding-load-averages) and [here](https://www.brendangregg.com/blog/2017-08-08/linux-load-averages.html))

* **history**

	- shows which commands were previously run by the user you are currently connected to
	- you can learn a lot about what type of work was previously performed on the machine, and what could have gone wrong with it
	- where you might want to start your debugging work

* **top**

	- shows what is currently running on this server
	- order results by CPU, memory utilization and catch the ones that are resource intensive

* **df**

	- shows disk utilization

* **netstat**

	- what port and IP your server is listening on
	- what processes are using sockets
	- try `netstat -lpn` on a Ubuntu machine

### Machine

- Debugging is pretty much about verifying assumptions, in a perfect world the software or system we are working on would be working perfectly, the server is in perfect shape and everybody is happy. But actually, it NEVER goes this way, things ALWAYS fail (it’s tremendous!).

* **For the machine level, you want to ask yourself these questions:**

	- Does the server have free disk space? - `df`
	- Is the server able to keep up with CPU load? - `w`, `top`, `ps`
	- Does the server have available memory? `free`
	- Are the server disk(s) able to keep up with read/write IO? - `htop`

* If the answer is **no** for any of these questions, then that might be the reason why things are not going as expected. There are often 3 ways of solving the issue:

	- free up resources (stop process(es) or reduce their resource consumption)
	- increase the machine resources (adding memory, CPU, disk space…)
	- distributing the resource usage to other machines

### Network issue

* **For the machine level, you want to ask yourself these questions:**

 - Does the server have the expected network interfaces and IPs up and running? `ifconfig`
 - Does the server listen on the sockets that it is supposed to? `netstat` (`netstat -lpd` or `netstat -lpn`)
 - Can you connect from the location you want to connect from, to the socket you want to connect to? `telnet` to the IP + PORT (`telnet 8.8.8.8 80`)
 - Does the server have the correct firewall rules? `iptables`, `ufw`:
    - `iptables -L`
    - `sudo ufw status`

### Process issue

* If a piece of Software isn’t behaving as expected, it can obviously be because of above reasons… but the good news is that there is more to look into (there is ALWAYS more to look into actually).

 * **Is the software started?** `init`, `init.d`:
    - `service NAME_OF_THE_SERVICE status`
    - `/etc/init.d/NAME_OF_THE_SERVICE status`

 * **Is the software process running?** `pgrep`, `ps`:
    - `pgrep -lf NAME_OF_THE_PROCESS`
    - `ps auxf`

* Is there anything interesting in the logs? look for log files in `/var/log/` and `tail -f` is your friend

### Debugging is fun

- Debugging can be frustrating, but it will definitely be part of your job, it requires experience and methodology to become good at it. The good news is that bugs are never going away, and the more experienced you become, trickier bugs will be assigned to you! Good luck :)

![Debugging is fun](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/64a7af155ef15f764688e9e8dd78262dce8a86c9/0x0E-web_stack_debugging_1/Debugging.gif)

![Debugging](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/e1243e75352b7cd5fd9aa5225a159090618bce5d/0x0E-web_stack_debugging_1/B4eeypV.jpg)

### Requirements

* **General**
	
	- Allowed editors: `vi`, `vim`, `emacs`
	- All your files will be interpreted on Ubuntu 20.04 LTS
	- All your files should end with a new line
	- A `README.md` file at the root of the folder of the project is mandatory
	- All your Bash script files must be executable
	- Your Bash scripts must pass `Shellcheck` without any error
	- Your Bash scripts must run without error
	- The first line of all your Bash scripts should be exactly `#!/usr/bin/env bash`
	- The second line of all your Bash scripts should be a comment explaining what is the script doing
	- You are not allowed to use `wget`

## Tasks

0. [Nginx likes port 80](0-nginx_likes_port_80)

- Using your debugging skills, find out what’s keeping your Ubuntu container’s Nginx installation from listening on port `80`. Feel free to install whatever tool you need, start and destroy as many containers as you need to debug the issue. Then, write a Bash script with the minimum number of commands to automate your fix.

* **Requirements:**

	- Nginx must be running, and listening on port `80` of all the server’s active IPv4 IPs
	- Write a Bash script that configures a server to the above requirements

```sh
root@966c5664b21f:/# curl 0:80
curl: (7) Failed to connect to 0 port 80: Connection refused
root@966c5664b21f:/#
root@966c5664b21f:/# ./0-nginx_likes_port_80 > /dev/null 2&>1
root@966c5664b21f:/#
```

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x0E-web_stack_debugging_1`
	- File: `0-nginx_likes_port_80`

1. [Make it sweet and short](1-debugging_made_short)

Using what you did for task #0, make your fix short and sweet.

* **Requirements:**

	- Your Bash script must be 5 lines long or less
	- There must be a new line at the end of the file
	- You must respect usual Bash script requirements
	- You cannot use `;`
	- You cannot use `&&`
	- You cannot use `wget`
	- You cannot execute your previous answer file (Do not include the name of the previous script in this one)
	- `service` (init) must say that `nginx` is not running ← for real

```sh
root@966c5664b21f:/# curl 0:80
curl: (7) Failed to connect to 0 port 80: Connection refused
root@966c5664b21f:/#
root@966c5664b21f:/# cat -e 1-debugging_made_short | wc -l
5
root@966c5664b21f:/# ./1-debugging_made_short
```

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x0E-web_stack_debugging_1`
	- File: `1-debugging_made_short`
