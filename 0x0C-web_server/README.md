## 0x0C. Web server

![DevOps](https://img.shields.io/badge/DevOps-red)
![SysAdmin](https://img.shields.io/badge/SysAdmin-red)

### Concepts

* For this project, we expect you to look at this concept:

### What is a Child Process?

Although it may sound like something out of a parenting handbook or a psychological journal, the term child process actually has nothing to do with human development. If you run a Unix or Linux dedicated server, you have likely encountered child processes without even knowing it. Therefore, it is good to know what child processes are and how they work.

A child process is a process created by another process. The creator process is properly called the “parent process”. The benefit of a child process is that it can start or stop at will without affecting the parent process. The child process is, however, is typically dependent on the parent process. If the parent process dies, the child process becomes an orphan process.

In normal server operations, the kernel may initiate child processes, and other programs, such as Apache, may have them as well. Apache creates child processes (or children, if you prefer) whenever the number of requests (web page accesses from users) exceeds the maximum allowed number of requests. When the maximum number of child process requests is exceeded, another child process spawns.

To view all running processes along with their child processes in a “tree” format, use the following command:

```sh
$ ps axf
```
For more information about child processes, see this [documentation](https://www.gnu.org/software/libc/manual/html_node/Processes.html#Processes)

![web server](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/2123daf00d36162ce204138dfa3a4bf617dedc57/0x0C-web_server/web%20server.png)

### Background Context

[Web Server - YouTube Video](https://www.youtube.com/watch?v=AZg4uJkEa-4)

In this project, some of the tasks will be graded on 2 aspects:

1. Is your `web-01` server configured according to requirements
2. Does your answer file contain a Bash script that automatically performs commands to configure an Ubuntu machine to fit requirements (meaning without any human intervention)

For example, if I need to create a file `/tmp/test` containing the string `hello world` and modify the configuration of Nginx to listen on port `8080` instead of `80`, I can use `emacs` on my server to create the file and to modify the Nginx configuration file `/etc/nginx/sites-enabled/default`.

But my answer file would contain:

```sh
abner@ubuntu cat 88-script_example
#!/usr/bin/env bash
# Configuring a server with specification XYZ
echo hello world > /tmp/test
sed -i 's/80/8080/g' /etc/nginx/sites-enabled/default
abner@ubuntu
```

As you can tell, I am not using `emacs` to perform the task in my answer file. This exercise is aiming at training you on automating your work. If you can automate tasks that you do manually, you can then automate yourself out of repetitive tasks and focus your energy on something more interesting. For an [SRE](https://www.atlassian.com/incident-management/devops/sre), that comes very handy when there are hundreds or thousands of servers to manage, the work cannot be only done manually. Note that the checker will execute your script as the `root` user, you do not need to use the `sudo` command.

A good Software Engineer is a [lazy Software Engineer](https://www.techwell.com/techwell-insights/2013/12/why-best-programmers-are-lazy-and-act-dumb)

![lazy Software Engineer](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/3a1c1dda6aabe1636ea79870ae00b6a80f0512ac/0x0C-web_server/lazy%20Software%20Engineer.jpg)

* Tips: to test your answer Bash script, feel free to reproduce the checker environment:

	- start a `Ubuntu 16.04` sandbox
	- run your script on it
	- see how it behaves

### Resources

* **Read or watch:**

	- [How the web works](https://developer.mozilla.org/en-US/docs/Learn/Getting_started_with_the_web/How_the_Web_works)
	- [Nginx](https://en.wikipedia.org/wiki/Nginx)
	- [How to Configure Nginx](https://www.digitalocean.com/community/tutorials/how-to-set-up-nginx-server-blocks-virtual-hosts-on-ubuntu-16-04)
	- [Child process concept page](https://github.com/Abner261/alx-system_engineering-devops/commit/c5096f58f9f28c40441671b9d8720bd61b6cf764)
	- [Root and sub domain](https://landingi.com/help/domains-vs-subdomains/)
	- [HTTP requests](https://www.tutorialspoint.com/http/http_methods.htm)
	- [HTTP redirection](https://moz.com/learn/seo/redirection)
	- [Not found HTTP response code](https://en.wikipedia.org/wiki/HTTP_404)
	- [Logs files on Linux](https://www.cyberciti.biz/faq/ubuntu-linux-gnome-system-log-viewer/)

* **For reference:**

	- [RFC 7231 (HTTP/1.1)](https://datatracker.ietf.org/doc/html/rfc7231)
	- [RFC 7540 (HTTP/2)](https://datatracker.ietf.org/doc/html/rfc7540)

* **man or help:**

	- `scp`
	- `curl`

* **Learning Objectives**

	- At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

* **General**

	- What is the main role of a web server
	- What is a child process
	- Why web servers usually have a parent process and child processes
	- What are the main HTTP requests

* **DNS**

	- What DNS stands for
	- What is DNS main role

* **DNS Record Types**

	- `A`
	- `CNAME`
	- `TXT`
	- `MX`

### Requirements

* **General**

	- Allowed editors: `vi`, `vim`, `emacs`
	- All your files will be interpreted on Ubuntu 16.04 LTS
	- All your files should end with a new line
	- A `README.md` file, at the root of the folder of the project, is mandatory
	- All your Bash script files must be executable
	- Your Bash script must pass `Shellcheck` (version `0.3.7`) without any error
	- The first line of all your Bash scripts should be exactly `#!/usr/bin/env bash`
	- The second line of all your Bash scripts should be a comment explaining what is the script doing
	- You can’t use `systemctl` for restarting a process

### Your servers

Name		|Username   |	IP    |	State	|
----------------|-----------|---------|---------|
132436-web-01	|	    | 	      |		|
		|	    |	      |		|

## Tasks

0. [Transfer a file to your server](0-transfer_file)

Write a Bash script that transfers a file from our client to a server:

**Requirements:**

* Accepts 4 parameters

1. The path to the file to be transferred
2. The IP of the server we want to transfer the file to
3. The username `scp` connects with
4. The path to the SSH private key that `scp` uses

- Display `Usage: 0-transfer_file PATH_TO_FILE IP USERNAME PATH_TO_SSH_KEY` if less than 3 parameters passed
- `scp` must transfer the file to the user home directory `~/`
- Strict host key checking must be disabled when using `scp`

Example:

```sh

```
