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


