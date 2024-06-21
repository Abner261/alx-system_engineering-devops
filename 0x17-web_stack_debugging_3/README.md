## 0x17. Web stack debugging #3

### Concepts

* For this project, we expect you to look at these concepts:

### [1] Web Server

**Do not mix up web server and server**

A web server is a software that delivers web pages. A server is an actual computer.

But you might hear people referring to a **web server** using the word **server** (Check out the **server** concept page to learn more about this.)

As mentioned above, a server is a physical machine, an actual computer, but in the Cloud era that could also be a virtual computer, generally called a VM ([Virtual Machine](https://en.wikipedia.org/wiki/Virtual_machine)) or [container](https://www.cio.com/article/247005/what-are-containers-and-why-do-you-need-them.html).

* **Readme:**

	- [Wikipedia page about web server](https://en.wikipedia.org/wiki/Web_server)
	- [Web server](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_web_server)
	- [What is a Web Server?](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_web_server)

### [2] Web stack debugging

[web stack debugging](https://github.com/Abner261/alx-system_engineering-devops/blob/master/0x0E-web_stack_debugging_1/README.md)

### Background Context

![stages of debugging](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/97a0fc5ec2e983f2e08c908b78f78963719631ae/0x17-web_stack_debugging_3/Stages%20of%20Debugging.png)

When debugging, sometimes logs are not enough. Either because the software is breaking in a way that was not expected and the error is not being logged, or because logs are not providing enough information. In this case, you will need to go down the stack, the good news is that this is something Holberton students can do :)

Wordpress is a very popular tool, it allows you to run blogs, portfolios, e-commerce and company websites… It [actually powers 26% of the web](https://managewp.com/blog/statistics-about-wordpress-usage), so there is a fair chance that you will end up working with it at some point in your career.

Wordpress is usually run on LAMP (Linux, Apache, MySQL, and PHP), which is a very widely used set of tools.

The web stack you are debugging today is a Wordpress website running on a LAMP stack

### Requirements

* **General**

	- All your files will be interpreted on Ubuntu 14.04 LTS
	- All your files should end with a new line
	- A `README.md` file at the root of the folder of the project is mandatory
	- Your Puppet manifests must pass `puppet-lint` version 2.1.1 without any errors
	- Your Puppet manifests must run without error
	- Your Puppet manifests first line must be a comment explaining what the Puppet manifest is about
	- Your Puppet manifests files must end with the extension `.pp`
	- Files will be checked with Puppet v3.4

## More Info

### Install `puppet-lint`

```sh
$ apt-get install -y ruby
$ gem install puppet-lint -v 2.1.1
```

## Tasks

0. [Strace is your friend](0-strace_is_your_friend.pp)
