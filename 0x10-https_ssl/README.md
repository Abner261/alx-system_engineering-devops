## 0x10. HTTPS SSL

![DevOps](https://img.shields.io/badge/DevOps-red)
![SysAdmin](https://img.shields.io/badge/SysAdmin-red)
![Security](https://img.shields.io/badge/Security-red)

### Concepts

* For this project, we expect you to look at these concepts:

1. **DNS**

### Basics

DNS is, in simple words, the technology that translates human-adapted, text-based domain names to machine-adapted, numerical-based IP:

- [Learn everything about DNS in cartoon](https://howdns.works/)
* Be sure to know the main DNS record types:
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

While creating any domain at a website of domain provider, the provider system will always ask you to choose a domain name without a dot in the name. In other words, the address of the root domain may be **mydomain.com** but it can never be **my.domain.com.** Domain providers block the ability to create such a root domain until you type a name without the dot. Why?

The dot in the domain name delimits the sub domain name (the part of the name before the dot, eg. **www.my.**) and the root domain name ( the part after the dot, ie **.domain.com**). This means that the address **my.domain.com** is a sub domain of the root domain, whose name is **domain.com**

In an administrator panel at domain provider account, you can create any number of sub domains. This means that for the root domain called **domain.com** it is possible to create different sub domains eg. **my.domain.com, your.domain.com, school.domain.com…** Creating multiple sub domains is always free and does not require you to set up new accounts on a domain provider website.

As you can see, all of the domain addresses used as an example (above) do not start with the **www** prefix. **www** is also a sub domain. The www prefix always leads to the main domain. See: [What’s the point in having www in a url?](https://serverfault.com/questions/145777/what-s-the-point-in-having-www-in-a-url)

2. [Web stack debugging](https://github.com/Abner261/alx-system_engineering-devops/blob/master/0x0E-web_stack_debugging_1/README.md)

![HTTPS](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/fad90f7b30427a42f08385774461ab9cae58c39b/0x10-https_ssl/HTTPS.png)

## Background Context

### What happens when you don’t secure your website traffic?

![Risks of unsecured website traffic](https://github.com/Abner261/alx-system_engineering-devops/blob/master/0x10-https_ssl/insecure%20web.gif?raw=true)

## Resources

* **Read or watch:**

	- [What is HTTPS?](https://www.instantssl.com/http-vs-https)
	- [What are the 2 main elements that SSL is providing](https://www.sslshopper.com/why-ssl-the-purpose-of-using-ssl-certificates.html)
	- [HAProxy SSL termination on Ubuntu16.04](https://docs.ionos.com/cloud)
	- [SSL termination](https://en.wikipedia.org/wiki/TLS_termination_proxy)
	- [Bash function](https://tldp.org/LDP/abs/html/complexfunct.html)

* **man or help:**

	- `awk`
	- `dig`

### Learning Objectives

- At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

### General

- What is HTTPS SSL 2 main roles
- What is the purpose encrypting traffic
- What SSL termination means

### Requirements

**General**

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted on Ubuntu 16.04 LTS
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- All your Bash script files must be executable
- Your Bash script must pass `Shellcheck` (version `0.3.7`) without any error
- The first line of all your Bash scripts should be exactly `#!/usr/bin/env bash`
- The second line of all your Bash scripts should be a comment explaining what is the script doing

### Your servers

Name		| Username	| IP		| State	
----------------|---------------|---------------|----------
132436-web-01	|		|		|
132436-web-02	|		|		|
132436-lb-01    |		|		|

## Tasks

0. [World wide web](0-world_wide_web)

Configure your domain zone so that the subdomain `www` points to your load-balancer IP (`lb-01`). Let’s also add other subdomains to make our life easier, and write a Bash script that will display information about subdomains.

Requirements:

- Add the subdomain `www` to your domain, point it to your `lb-01` IP (your domain name might be configured with default subdomains, feel free to remove them)
- Add the subdomain lb-01 to your domain, point it to your `lb-01` IP
- Add the subdomain web-01 to your domain, point it to your `web-01` IP
- Add the subdomain web-02 to your domain, point it to your `web-02` IP
* Your Bash script must accept 2 arguments:

1. `domain`:
    - type: string
    - what: domain name to audit
    - mandatory: yes

2. `subdomain`:
    - type: string
    - what: specific subdomain to audit
    - mandatory: no

* Output: `The subdomain [SUB_DOMAIN] is a [RECORD_TYPE] record and points to [DESTINATION]`
- When only the parameter `domain` is provided, display information for its subdomains `www`, `lb-01`, `web-01` and `web-02` - in this specific order
- When passing `domain` and `subdomain` parameters, display information for the specified subdomain
- Ignore `shellcheck` case `SC2086`
* Must use:
	- `awk`
	- at least one Bash function

* You do not need to handle edge cases such as:
	- Empty parameters
	- Nonexistent domain names
	- Nonexistent subdomains

Example:

```sh
sylvain@ubuntu$ dig www.holberton.online | grep -A1 'ANSWER SECTION:'
;; ANSWER SECTION:
www.holberton.online.   87  IN  A   54.210.47.110
sylvain@ubuntu$ dig lb-01.holberton.online | grep -A1 'ANSWER SECTION:'
;; ANSWER SECTION:
lb-01.holberton.online. 101 IN  A   54.210.47.110
sylvain@ubuntu$ dig web-01.holberton.online | grep -A1 'ANSWER SECTION:'
;; ANSWER SECTION:
web-01.holberton.online. 212    IN  A   34.198.248.145
sylvain@ubuntu$ dig web-02.holberton.online | grep -A1 'ANSWER SECTION:'
;; ANSWER SECTION:
web-02.holberton.online. 298    IN  A   54.89.38.100
sylvain@ubuntu$
sylvain@ubuntu$
sylvain@ubuntu$ ./0-world_wide_web holberton.online
The subdomain www is a A record and points to 54.210.47.110
The subdomain lb-01 is a A record and points to 54.210.47.110
The subdomain web-01 is a A record and points to 34.198.248.145
The subdomain web-02 is a A record and points to 54.89.38.100
sylvain@ubuntu$
sylvain@ubuntu$ ./0-world_wide_web holberton.online web-02
The subdomain web-02 is a A record and points to 54.89.38.100
sylvain@ubuntu$
```

**Repo:**

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x10-https_ssl`
- File: `0-world_wide_web`

1. [HAproxy SSL termination](1-haproxy_ssl_termination)

“Terminating SSL on HAproxy” means that HAproxy is configured to handle encrypted traffic, unencrypt it and pass it on to its destination.

Create a certificate using `certbot` and configure `HAproxy` to accept encrypted traffic for your subdomain `www.`.

Requirements:

- HAproxy must be listening on port TCP 443
- HAproxy must be accepting SSL traffic
- HAproxy must serve encrypted traffic that will return the `/` of your web server
- When querying the root of your domain name, the page returned must contain `Holberton School`
- Share your HAproxy config as an answer file (`/etc/haproxy/haproxy.cfg`)

The file `1-haproxy_ssl_termination` must be your HAproxy configuration file

Make sure to install HAproxy 1.5 or higher, [SSL termination](https://en.wikipedia.org/wiki/TLS_termination_proxy) is not available before v1.5.

Example:

```sh
sylvain@ubuntu$ curl -sI https://www.holberton.online
HTTP/1.1 200 OK
Server: nginx/1.4.6 (Ubuntu)
Date: Tue, 28 Feb 2017 01:52:04 GMT
Content-Type: text/html
Content-Length: 30
Last-Modified: Tue, 21 Feb 2017 07:21:32 GMT
ETag: "58abea7c-1e"
X-Served-By: 03-web-01
Accept-Ranges: bytes
sylvain@ubuntu$
sylvain@ubuntu$ curl https://www.holberton.online
Holberton School for the win!
sylvain@ubuntu$
```

**Repo:**

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x10-https_ssl`
- File: `1-haproxy_ssl_termination`
