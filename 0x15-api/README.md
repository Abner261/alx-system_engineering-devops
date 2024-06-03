## 0x15. API

### Concepts

* For this project, we expect you to look at this concept:

	- Portfolio Project Deeper Overview

## Portfolio Project Deeper Overview

### Portfolio Project Guide

Welcome to an exciting phase in your ALX journey**—Section 3**, where you’ll embark on a Portfolio Project. This guide aims to provide you with all the necessary details to navigate this project successfully.

We also had a Q & A Session on Zoom. If you prefer watching a video you can use this. *Recording - * [Link](https://sandtech.zoom.us/rec/component-page?action=viewdetailpage&sharelevel=meeting&useWhichPasswd=meeting&clusterId=us06&componentName=need-password&meetingId=UGWLpxEKxW-L-gMhxCiH0c6XBOQeXqsDUNCAnhOSnRNQLybrvCQt4zLJywERmPnY.vayvMDgGU6v5V-aL&originRequestUrl=https%3A%2F%2Fsandtech.zoom.us%2Frec%2Fshare%2F-Dsl_R4DA_rNh7FCWsa8uUX2OR6_Pe2cC-ci2BMvPBAbhIseR11nrwqqfIk-ErwQ.0Z3ySSLrT70FcKWB) *Password - * @W3h5u2$

### What is a Portfolio Project?

The Portfolio Project is a capstone endeavor designed to encapsulate all the skills and knowledge you’ve acquired during the ALX Foundations program. You will be tasked with creating a project from scratch, showcasing your ability to apply what you’ve learned in a real-world context.

### Freedom to Explore

We’re setting you free on this one. There are **no strict guidelines** on what to build. Your heart’s desire, guided by your creative spirit, is the limit. Mobile apps, web applications, game development—pick your passion and run with it.

### Project Structure Overview

Your Portfolio Project will unfold in three distinct stages, each with its own set of objectives and deliverables.

### 1. Research Phase

**Duration:** 3 weeks, comprising 3 mini-projects.

- **Idea Generation:** Begin with brainstorming and documenting your project idea.
- **MVP Design:** Develop a concept for a Minimum Viable Product (MVP).
- **Project Planning:** Draft a detailed plan on how you’ll execute the projects.

### 2. Building Phase

**Duration:** 3 weeks, also with 3 projects.

- **Development:** This is where your project starts to take shape. Begin with the MVP and expand from there.
- **Landing Page Creation:** Develop a compelling landing page for your project.
- **Presentation Preparation:** Start preparing for your project presentation.

### 3. Post-Project Phase

**Duration:** 1-2 weeks

- **Blog Post:** Write about your experience and what you learned during the project development process.
- **GitHub Clean-up:** Refine your project’s GitHub repository, focusing on improving the README and documentation.
- **Final Presentations:** If you haven’t presented your project yet, now is the time.

## Key Considerations

### Teams

You can choose to work individually or collaborate in teams of up to three. However, the team you choose for the Research and Project Approval (Part 1) is the team you’ll work with throughout these seven weeks. Team adjustments won’t be possible.

We highly encourage you to make informed decisions when picking your teammates. Whoever you pick in Research and Project Approval (Part 1) is the person you will be stuck with for the next 8 weeks. Don’t randomly pair up with people. Before making a pairing request to someone or accepting a pairing request from someone, make sure to have a conversation with them.

If you want to work in a team of 3 people, you are supposed to send a request to the 2 other people at the same time. If you make a request to only one person, you will end up in a team of 2 people.

Team Repairing is not going to be done for the portfolio project, therefore kindly follow the instructions.

### Time Management

We’ve seen so many cases of learners under-estimating the amount of work required in their portfolio project. Please begin working on your project as soon as possible. Don’t wait until the last minute. Plan your time really well. The Reasrach and Planning project Part 3 will help you with this, make sure you follow the plan you come up with.

### Presentation

After you are done building you will be expected to present your project to senior learners. There is a process in place for this you will learn more when we get to this part. The presentation is very important. If you fail to present your project and consequently not get scored for the Portfolio project you will not be validated and you won’t be able to proceed to specialization.

### No Project Idea?

As indicated in the other concept page, if you are unable to come up with your own idea, you can build the Maze Project. If you pick the maze project you are still expected to do all the other projects i.e Research, Building … The only difference is that your project idea is provided by ALX. You will do your Research Part of the project around the Maze Project.

### Support and Questions

If you have any questions or need clarifications, feel free to ask on Discord. We’ll also have sessions throughout the 7-week period to help you overcome any obstacles.

**We’re thrilled to see the amazing projects you’ll create. Your ALX journey is reaching new heights, and we’re here to support you every step of the way**

### Background Context


Old-school system administrators usually only know Bash and that is what they use to build their scripts. While Bash is perfectly fine for a lot of things, it can quickly get messy and not efficient compared to other programming languages. The new generation of system administrators, usually called SREs, are pretty much regular software engineers but instead of building products, they are managing systems. And one of the big differences with their predecessors is that they know more than just Bash scripting.

One popular way to expose an application and dataset is to use an API. Often, they are the public facing part of websites and micro-services so that allow outsiders to interact with them – access and modify their data. In this project, you will access employee data via an API to organize and export them to different data structures.

This is a perfect example of a task that is not suited for Bash scripting, so let’s build Python scripts

### Resources

* **Read or watch:**

- [Friends don’t let friends program in shell script](https://www.turnkeylinux.org/blog/friends-dont-let-friends-program-shell-script)
- [What is an API](https://www.webopedia.com/definitions/api/)
- [What is an API? In English, please](https://www.freecodecamp.org/news/what-is-an-api-in-english-please-b880a3214a82/)
- [What is a REST API](https://www.sitepoint.com/rest-api/)
- [What are microservices](https://smartbear.com/learn/api-design/microservices/)
- [PEP8 Python style - having a clean code respecting style guide is really appreciated in the industry](https://peps.python.org/pep-0008/)

* **Learning Objectives**

	- At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

* **General**

	- What Bash scripting should not be used for
	- What is an API
	- What is a REST API
	- What are microservices
	- What is the CSV format
	- What is the JSON format
	- Pythonic Package and module name style
	- Pythonic Class name style
	- Pythonic Variable name style
	- Pythonic Function name style
	- Pythonic Constant name style
	- Significance of CapWords or CamelCase in Python

### Requirements

* **General**

	- Allowed editors: `vi`, `vim`, `emacs`
	- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
	- All your files should end with a new line
	- The first line of all your files should be exactly `#!/usr/bin/python3`
	- **Libraries imported in your Python files must be organized in alphabetical order**
	- A `README.md` file, at the root of the folder of the project, is mandatory
	- Your code should use the pycodestyle (version `2.8.*`)
	- All your files must be executable
	- The length of your files will be tested using `wc`
	- All your modules should have a documentation (`python3 -c 'print(__import__("my_module").__doc__)'`)
	- You must use [get](https://docs.python.org/3.4/library/stdtypes.html#dict.get) to access to dictionary value by key (it won’t throw an exception if the key doesn’t exist in the dictionary)
	- Your code should not be executed when imported (by using `if __name__ == "__main__":`)

## Tasks

0. [Gather data from an API](0-gather_data_from_an_API.py)

Write a Python script that, using this [REST API](https://jsonplaceholder.typicode.com/), for a given employee ID, returns information about his/her TODO list progress.

### Requirements:

- You must use `urllib` or `requests` module
- The script must accept an integer as a parameter, which is the employee ID
- The script must display on the standard output the employee TODO list progress in this exact format:
	
  * First line: `Employee EMPLOYEE_NAME is done with tasks(NUMBER_OF_DONE_TASKS/TOTAL_NUMBER_OF_TASKS):`
	- `EMPLOYEE_NAME`: name of the employee
	- `NUMBER_OF_DONE_TASKS`: number of completed tasks
	- `TOTAL_NUMBER_OF_TASKS`: total number of tasks, which is the sum of completed and non-completed tasks

* Second and N next lines display the title of completed tasks: `TASK_TITLE` (with 1 tabulation and 1 space before the `TASK_TITLE`)

Example:

```sh
root@5cfa278c3e93:~/alx-system_engineering-devops/0x15-api# vi 0-gather_data_from_an_API.py 
root@5cfa278c3e93:~/alx-system_engineering-devops/0x15-api# chmod u+x 0-gather_data_from_an_API.py 
root@5cfa278c3e93:~/alx-system_engineering-devops/0x15-api# python3 0-gather_data_from_an_API.py 2
Employee Ervin Howell is done with tasks(8/20):
         distinctio vitae autem nihil ut molestias quo
         voluptas quo tenetur perspiciatis explicabo natus
         aliquam aut quasi
         veritatis pariatur delectus
         nemo perspiciatis repellat ut dolor libero commodi blanditiis omnis
         repellendus veritatis molestias dicta incidunt
         excepturi deleniti adipisci voluptatem et neque optio illum ad
         totam atque quo nesciunt
root@5cfa278c3e93:~/alx-system_engineering-devops/0x15-api# python3 0-gather_data_from_an_API.py 4
Employee Patricia Lebsack is done with tasks(6/20):
         odit optio omnis qui sunt
         doloremque aut dolores quidem fuga qui nulla
         sint amet quia totam corporis qui exercitationem commodi
         sequi dolorem sed
         eum ipsa maxime ut
         tempore molestias dolores rerum sequi voluptates ipsum consequatur
root@5cfa278c3e93:~/alx-system_engineering-devops/0x15-api# python3 0-gather_data_from_an_API.py 4 | tr " " "S" | tr "\t" "T" 
EmployeeSPatriciaSLebsackSisSdoneSwithStasks(6/20):
TSoditSoptioSomnisSquiSsunt
TSdoloremqueSautSdoloresSquidemSfugaSquiSnulla
TSsintSametSquiaStotamScorporisSquiSexercitationemScommodi
TSsequiSdoloremSsed
TSeumSipsaSmaximeSut
TStemporeSmolestiasSdoloresSrerumSsequiSvoluptatesSipsumSconsequatur
root@5cfa278c3e93:~/alx-system_engineering-devops/0x15-api#
```

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x15-api`
	- File: `0-gather_data_from_an_API.py`

1. [Export to CSV](1-export_to_CSV.py)
