## 0x16. API advanced

![API GUIDE](https://raw.githubusercontent.com/Abner261/alx-system_engineering-devops/8a4610e183db8cc88700fd75a53f8f16cacafb5e/0x16-api_advanced/API%20Guide.png)

### Background Context

Questions involving APIs are common for interviews. Sometimes they’re as simple as ‘write a Python script that queries a given endpoint’, sometimes they require you to use recursive functions and format/sort the results.

A great API to use for some practice is the Reddit API. There’s a lot of endpoints available, many that don’t require any form of authentication, and there’s tons of information to be parsed out and presented. Getting comfortable with API calls now can save you some face during technical interviews and even outside of the job market, you might find personal use cases to make your life a little bit easier.

### Resources

* **Read or watch:**

	- [Reddit API Documentation](https://www.reddit.com/dev/api/)
	- [Query String](https://en.wikipedia.org/wiki/Query_string)

* **Learning Objectives**

	- At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

* **General**

	- How to read API documentation to find the endpoints you’re looking for
	- How to use an API with pagination
	- How to parse JSON results from an API
	- How to make a recursive API call
	- How to sort a dictionary by value

### Requirements

* **General**

	- Allowed editors: `vi`, `vim`, `emacs`
	- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using `python3` (version 3.4.3)
	- All your files should end with a new line
	- The first line of all your files should be exactly `#!/usr/bin/python3`
	- Libraries imported in your Python files must be organized in alphabetical order
	- A `README.md` file, at the root of the folder of the project, is mandatory
	- Your code should use the `PEP 8` style
	- All your files must be executable
	- The length of your files will be tested using `wc`
	- All your modules should have a documentation (`python3 -c 'print(__import__("my_module").__doc__)'`)
	- You must use the Requests module for sending HTTP requests to the Reddit API

## Tasks

0. [How many subs?](0-subs.py)

Write a function that queries the [Reddit API](https://www.reddit.com/dev/api/) and returns the number of subscribers (not active users, total subscribers) for a given subreddit. If an invalid subreddit is given, the function should return 0.

Hint: No authentication is necessary for most features of the Reddit API. If you’re getting errors related to Too Many Requests, ensure you’re setting a custom User-Agent.

* **Requirements:**

	- Prototype: `def number_of_subscribers(subreddit)`
	- If not a valid subreddit, return 0.
	- NOTE: Invalid subreddits may return a redirect to search results. Ensure that you are not following redirects.

```sh
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ vi 0-subs.py
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ chmod u+x 0-subs.py 
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ ls
 0-main.py   0-subs.py  'API Guide.png'   README.md
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ python3 0-main.py programming
6214520
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ python3 0-main.py this_is_a_fake_subreddit
0
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$
```

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x16-api_advanced`
	- File: `0-subs.py`

1. [Top Ten](1-top_ten.py)

Write a function that queries the [Reddit API](https://www.reddit.com/dev/api/) and prints the titles of the first 10 hot posts listed for a given subreddit.

* **Requirements:**

	- Prototype: `def top_ten(subreddit)`
	- If not a valid subreddit, print None.
	- NOTE: Invalid subreddits may return a redirect to search results. Ensure that you are not following redirects.

```sh
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ vi 1-top_ten.py 
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ chmod u+x 1-top_ten.py 
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ python3 1-main.py programming
The State of the Subreddit (May 2024)
Why does SQLite (in production) have such a bad rep?
Literally never lose your commits again - git reflog to the rescue 
GitHub Actions: Cache Chaos
The systems programming language C3 reaches 0.6, closing in on 1.0
The real COBOL programmer shortage is 5-10 years out
Report generating domain-specific language (Forth-like and S-expression)
Thinking about COBOL for your next career move? Check out this IBM demo of development from 1975.
Programming Mantras Are Proverbs
Delivering results at keystroke speed: inside a full-text search engine
Measured: Intuitive, type-safe units for your favorite Kotlin target
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ python3 1-main.py this_is_a_fake_subreddit
None
abner@engineer:~/alx-system_engineering-devops/0x16-api_advanced$ 
```

* **Repo:**

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x16-api_advanced`
	- File: `1-top_ten.py`

2. [Recurse it!](2-recurse.py)


