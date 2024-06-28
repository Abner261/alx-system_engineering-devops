## 0x09. Web infrastructure design

![DevOps](https://img.shields.io/badge/DevOps-black)
![SysAdmin](https://img.shields.io/badge/SysAdmin-green)
![web infrastructure](https://img.shields.io/badge/web%20infrastructure-red)

### Concepts

* For this project, we expect you to look at these concepts:

## DNS

### Basics

* DNS is, in simple words, the technology that translates human-adapted, text-based domain names to machine-adapted, numerical-based IP:

  - [Learn everything about DNS in cartoon](https://howdns.works/)
  - Be sure to know the main DNS record types:
	
	- [A](https://support.dnsimple.com/articles/a-record/)
	- [CNAME](https://en.wikipedia.org/wiki/CNAME_record)
	- [MX](https://en.wikipedia.org/wiki/MX_record)
	- [TXT](https://en.wikipedia.org/wiki/TXT_record)

### Advanced

	- [Use DNS to scale with round-robin DNS](https://www.dnsknowledge.com/whatis/round-robin-dns/)
	- [What’s an NS Record?](https://support.dnsimple.com/articles/ns-record/)
	- [What’s an SOA Record?](https://support.dnsimple.com/articles/soa-record/)

### The root domain and sub domain - differences

A root domain is the parent domain to a sub domain, and its name is not, and can not be divided by a dot.

While creating any domain at a website of domain provider, the provider system will always ask you to choose a domain name without a dot in the name. In other words, the address of the root domain may be **mydomain.com** but it can never be **my.domain.com**. Domain providers block the ability to create such a root domain until you type a name without the dot. Why?

The dot in the domain name delimits the sub domain name (the part of the name before the dot, eg. **www.my.**) and the root domain name ( the part after the dot, ie **.domain.com**). This means that the address **my.domain.com** is a sub domain of the root domain, whose name is **domain.com**

In an administrator panel at domain provider account, you can create any number of sub domains. This means that for the root domain called **domain.com** it is possible to create different sub domains eg. **my.domain.com**, **your.domain.com**, **school.domain.com**… Creating multiple sub domains is always free and does not require you to set up new accounts on a domain provider website.

As you can see, all of the domain addresses used as an example (above) do not start with the **www** prefix. **www** is also a sub domain. The www prefix always leads to the main domain. See: [What’s the point in having www in a url?](https://serverfault.com/questions/145777/what-s-the-point-in-having-www-in-a-url)

### Resources

* **Read or watch:**

	- **Network basics** concept page
	- **Server** concept page
	- **Web server** concept page
	- **DNS** concept page
	- **Load balancer** concept page
	- **Monitoring** concept page
	- [What is a database](https://www.oracle.com/ke/database/what-is-database/)
	- [What’s the difference between a web server and an app server?](https://www.infoworld.com/article/2077354/app-server-web-server-what-s-the-difference.html)
	- [DNS record types](https://www.site24x7.com/learn/dns-record-types.html)
	- [Single point of failure](https://avinetworks.com/glossary/single-point-of-failure/)
	- [How to avoid downtime when deploying new code](https://softwareengineering.stackexchange.com/questions/35063/how-do-you-update-your-production-codebase-database-schema-without-causing-downt#answers-header)
	- [High availability cluster (active-active/active-passive)](https://docs.oracle.com/cd/E17904_01/core.1111/e10106/intro.htm#ASHIA714)
	- [What is HTTPS](https://www.instantssl.com/http-vs-https)
	- [What is a firewall](https://www.webopedia.com/definitions/firewall/)

* **Learning Objectives**

	- At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

* **General**

	- You must be able to draw a diagram covering the web stack you built with the sysadmin/devops track projects
	- You must be able to explain what each component is doing
	- You must be able to explain system redundancy
	- Know all the mentioned acronyms: LAMP, SPOF, QPS

### Requirements

* **General**

	- A `README.md` file, at the root of the folder of the project, is mandatory
	- For each task, once you are done whiteboarding (on a whiteboard, piece of paper or software or your choice), take a picture/screenshot of your diagram
	- This project will be manually reviewed:
	- As each task is completed, the name of that task will turn green
Upload a screenshot, showing that you completed the required levels, to any image hosting service (I personally use [imgur](https://imgur.com/) but feel free to use anything you want).
	- For the following tasks, insert the link from of your screenshot into the answer file
	- After pushing your answer file to GitHub, insert the GitHub file link into the URL box
	- You will also have to whiteboard each task in front of a mentor, staff or student - no computer or notes will be allowed during the whiteboarding session
	- Focus on what you are being asked:
	- Cover what the requirements mention, we will explore details in a later project
	- Keep in mind that you will have 30 minutes to perform the exercise, you will get points for what is asked in requirements
	- Similarly in a job interview, you should answer what the interviewer asked for, be careful about being too verbose - always ask the interviewer if going into details is necessary - speaking too much can play against you
	- In this project, again, avoid going in details if not asked

## Tasks

0. [Simple web stack](0-simple_web_stack)

A lot of websites are powered by simple web infrastructure, a lot of time it is composed of a single server with a [LAMP stack](https://en.wikipedia.org/wiki/LAMP_%28software_bundle%29).

On a whiteboard, design a one server web infrastructure that hosts the website that is reachable via `www.foobar.com`. Start your explanation by having a user wanting to access your website.

### Requirements:

* You must use:

	- 1 server
	- 1 web server (Nginx)
	- 1 application server
	- 1 application files (your code base)
	- 1 database (MySQL)
	- 1 domain name `foobar.com` configured with a `www` record that points to your server IP `8.8.8.8`

* You must be able to explain some specifics about this infrastructure:

	- What is a server
	- What is the role of the domain name
	- What type of DNS record `www` is in `www.foobar.com`
	- What is the role of the web server
	- What is the role of the application server
	- What is the role of the database
	- What is the server using to communicate with the computer of the user requesting the website

* You must be able to explain what the issues are with this infrastructure:

	- SPOF
	- Downtime when maintenance needed (like deploying new code web server needs to be restarted)
	- Cannot scale if too much incoming traffic

Please, remember that everything must be written in English to further your technical ability in a variety of settings.

[Add URLs here:]()

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x09-web_infrastructure_design`
	- File: `0-simple_web_stack`

1. [Distributed web infrastructure](1-distributed_web_infrastructure)
