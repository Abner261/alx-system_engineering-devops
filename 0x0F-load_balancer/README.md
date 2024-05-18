## 0x0F. Load balancer

### Concepts

* **For this project, we expect you to look at these concepts:**

### Load balancer

- Ever wonder how Facebook, Linkedin, Twitter and other web giants are handling such huge amounts of traffic? They don’t have just one server, but tens of thousands of them. In order to achieve this, web traffic needs to be distributed to these servers, and that is the role of a load-balancer.

![load balancer](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/abea22b8ab3fa51b0d0c8abc4c94c146f4b5cafb/0x0F-load_balancer/load%20balancer.png)

* **Readme:**
	- [Load-balancing](https://www.thegeekstuff.com/2016/01/load-balancer-intro/)
	- [Load-balancing algorithms](https://web.archive.org/web/20240418081327/https://community.f5.com/kb/technicalarticles/intro-to-load-balancing-for-developers-%E2%80%93-the-algorithms/273759)


![Load balancer](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/63b1248e1f0648b91c4bdae29b69cb1755376e59/0x0F-load_balancer/qfdked8.png)

### Background Context

* You have been given 2 additional servers:

	- gc-[STUDENT_ID]-web-02-XXXXXXXXXX
	- gc-[STUDENT_ID]-lb-01-XXXXXXXXXX

- Let’s improve our web stack so that there is [redundancy](https://en.wikipedia.org/wiki/Redundancy_%28engineering%29) for our web servers. This will allow us to be able to accept more traffic by doubling the number of web servers, and to make our infrastructure more reliable. If one web server fails, we will still have a second one to handle requests.

- For this project, you will need to write Bash scripts to automate your work. All scripts must be designed to configure a brand new Ubuntu server to match the task requirements

### Resources

* **Read or watch:**

	- [Introduction to load-balancing and HAproxy]()
	- [HTTP header]()
	- [Debian/Ubuntu HAProxy packages]()

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

### Your servers

|Name		|Username	|IP		|State		|
|---------------|---------------|---------------|---------------|	
|132436-web-01	|		|		|		|
|132436-web-02	|		|		|		|
|132436-lb-01	|		|		|		|

## Tasks

0. [Double the number of webservers](0-custom_http_response_header)

- In this first task you need to configure `web-02` to be identical to `web-01`. Fortunately, you built a Bash script during your [web server project](https://intranet.alxswe.com/projects/266), and they’ll now come in handy to easily configure `web-02`. Remember, always try to automate your work!

- Since we’re placing our web servers behind a load balancer for this project, we want to add a custom Nginx response header. The goal here is to be able to track which web server is answering our HTTP requests, to understand and track the way a load balancer works. More in the coming tasks.

**Requirements:**

* Configure Nginx so that its HTTP response contains a custom header (on `web-01` and `web-02`)
	- The name of the custom HTTP header must be `X-Served-By`
	- The value of the custom HTTP header must be the hostname of the server Nginx is running on
* Write `0-custom_http_response_header` so that it configures a brand new Ubuntu machine to the requirements asked in this task
	- [Ignore](https://github.com/koalaman/shellcheck/wiki/Ignore) [SC2154](https://github.com/koalaman/shellcheck/wiki/SC2154) for `shellcheck`

Example:

```sh

```

If your server’s hostnames are not properly configured (`[STUDENT_ID]-web-01` and `[STUDENT_ID]-web-02`.), follow this [tutorial](https://repost.aws/knowledge-center/linux-static-hostname)

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x0F-load_balancer`
	- File: `0-custom_http_response_header`

1. [Install your load balancer](1-install_load_balancer)

Install and configure HAproxy on your `lb-01` server.

* **Requirements:**

	- Configure HAproxy so that it send traffic to `web-01` and `web-02`
	- Distribute requests using a roundrobin algorithm
	- Make sure that HAproxy can be managed via an init script
	- Make sure that your servers are configured with the right hostnames: `[STUDENT_ID]-web-01` and `[STUDENT_ID]-web-02`. If not, follow this [tutorial](https://docs.aws.amazon.com/linux/al2/ug/set-hostname.html)
	- For your answer file, write a Bash script that configures a new Ubuntu machine to respect above requirements

Example:

```sh

```

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x0F-load_balancer`
	- File: `1-install_load_balancer`

2. [Add a custom HTTP header with Puppet](2-puppet_custom_http_response_header.pp)

* Just as in task #0, we’d like you to automate the task of creating a custom HTTP header response, but with Puppet.

	- The name of the custom HTTP header must be `X-Served-By`
	- The value of the custom HTTP header must be the hostname of the server Nginx is running on
	- Write `2-puppet_custom_http_response_header.pp` so that it configures a brand new Ubuntu machine to the requirements asked in this task

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x0F-load_balancer`
	- File: `2-puppet_custom_http_response_header.pp`
