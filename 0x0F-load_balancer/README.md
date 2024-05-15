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
