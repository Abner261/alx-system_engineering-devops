### Updates:📢
_______________
#### 0x06. Regular expression

#### Concepts
- For this project, we expect you to look at this concept:

#### Regular Expression

- A regular expression, commonly called a “regexp”, is a sequence of characters that define a search pattern.  It is mainly for use in pattern matching with strings, or string matching (i.e. it operates like a “find and replace” command). While it is a very powerful tool, it is also very dangerous because of its complexity

- [Some people, when confronted with a problem, think “I know, I’ll use regular expressions.”   Now they have two problems.](https://intranet.alxswe.com/rltoken/bg6ER7JUhyuRtTu9-vpQuw) (super classic joke in the industry)

- One thing you have to be careful with is that different languages use different regexp engines. That means that a regexp in Python, for example, will be interpreted differently in Javascript:

- Regular expressions are everywhere and software engineers, no matter their positions, will have to use them during their careers. System administrators and DevOps are the ones using them the most because they are very handy for log parsing.

- Read about regexp:

- http://www.regular-expressions.info/
- [http://www.w3schools.com/jsref/jsref_obj_regexp.asp](https://www.w3schools.com/jsref/jsref_obj_regexp.asp) Play with regexp (or compose them):

- Ruby: [http://rubular.com/](https://rubular.com/)

- PHP/Javascript/Python: [https://regex101.com/](https://regex101.com/)

#### Background Context
- For this project, you have to build your regular expression using Oniguruma, a regular expression library that which is used by Ruby by default. Note that other regular expression libraries sometimes have different properties.

- Because the focus of this exercise is to play with regular expressions (regex), here is the Ruby code that you should use, just replace the regexp part, meaning the code in between the `//`:

```sh
sylvain@ubuntu$ cat example.rb
#!/usr/bin/env ruby
puts ARGV[0].scan(/127.0.0.[0-9]/).join
sylvain@ubuntu$
sylvain@ubuntu$ ./example.rb 127.0.0.2
127.0.0.2
sylvain@ubuntu$ ./example.rb 127.0.0.1
127.0.0.1
sylvain@ubuntu$ ./example.rb 127.0.0.a
```

#### Resources
#### Read or watch:

- [Regular expressions - basics](https://www.slideshare.net/neha_jain/introducing-regular-expressions)
- [Regular expressions - advanced](https://www.slideshare.net/neha_jain/advanced-regular-expressions-80296518)
- [Rubular is your best friend](https://rubular.com/)
- [Use a regular expression against a problem: now you have 2 problems](https://blog.codinghorror.com/regular-expressions-now-you-have-two-problems/)
- [Learn Regular Expressions with simple, interactive exercises](https://regexone.com/)

#### Requirements

#### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted on Ubuntu 20.04 LTS
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- All your Bash script files must be executable
- The first line of all your Bash scripts should be exactly `#!/usr/bin/env ruby`
- All your regex must be built for the Oniguruma library

0. [Simply matching School](./0-simply_match_school.rb)


#### Requirements:

- The regular expression must match `School`
- Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method

- Example:
```sh
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# vi 0-simply_match_school.rb
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# chmod u+x 0-simply_match_school.rb
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./0-simply_match_school.rb School | cat -e
School$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./0-simply_match_school.rb "Best School" | cat -e
School$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./0-simply_match_school.rb "School Best School" | cat -e
SchoolSchool$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./0-simply_match_school.rb "Grace Hopper" | cat -e
$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions#
```
#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `0-simply_match_school.rb`

1. [Repetition Token #0](./1-repetition_token_0.rb)

#### Requirements:

- Find the regular expression that will match the above cases
- Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method
#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `1-repetition_token_0.rb`

2. [Repetition Token #1](./2-repetition_token_1.rb)

#### Requirements:

- Find the regular expression that will match the above cases
- Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method
#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `2-repetition_token_1.rb`

3. [Repetition Token #2](./3-repetition_token_2.rb)

#### Requirements:

- Find the regular expression that will match the above cases
- Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method
##### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `3-repetition_token_2.rb`

4. [Repetition Token #3](./4-repetition_token_3.rb)

#### Requirements:

- Find the regular expression that will match the above cases
- Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method
- Your regex should not contain square brackets
#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `4-repetition_token_3.rb`

5. [Not quite HBTN yet](./5-beginning_and_end.rb)

#### Requirements:

- The regular expression must be exactly matching a string that starts with h ends with n and can have any single character in between
- Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method
- Example:
```sh
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# vi 5-beginning_and_end.rb
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# chmod u+x 5-beginning_and_end.rb
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./5-beginning_and_end.rb 'hn' | cat -e
$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./5-beginning_and_end.rb 'hbn' | cat -e
hbn$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./5-beginning_and_end.rb 'hbtn' | cat -e
$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions# ./5-beginning_and_end.rb 'h8n' | cat -e
h8n$
root@e1714dc5a3c9:~/alx-system_engineering-devops/0x06-regular_expressions#
```
#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `5-beginning_and_end.rb`

6. [Call me maybe](./6-phone_number.rb)

- This task is brought to you by a professional advisor [Neha Jain](https://twitter.com/_nehajain), Senior Software Engineer at LinkedIn.

#### Requirement:

- The regular expression must match a 10 digit phone number
- Example:

#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `6-phone_number.rb`

7. [OMG WHY ARE YOU SHOUTING?](./7-OMG_WHY_ARE_YOU_SHOUTING.rb)

#### Requirement:

- The regular expression must be only matching: capital letters
- Example:

#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `7-OMG_WHY_ARE_YOU_SHOUTING.rb`

8. [Textme](./100-textme.rb)

- This exercise was prepared for you by [Guillaume Plessis](https://www.linkedin.com/in/gplessis/), VP of Infrastructure at TextMe. It is something he uses daily. You can thank Guillaume for his project [on Twitter](https://twitter.com/gui).

- For this task, you’ll be taking over Guillaume’s responsibilities: one afternoon, a TextMe VoIP Engineer comes to you and explains she wants to run some statistics on the TextMe app text messages transactions.

#### Requirements:

- Your script should output: `[SENDER],[RECEIVER],[FLAGS]`
	- The sender phone number or name (including country code if present)
	- The receiver phone number or name (including country code if present)
	- The flags that were used
You can find a [log file here](http://intranet-projects-files.s3.amazonaws.com/holbertonschool-sysadmin_devops/78/text_messages.log).

- Example:

##### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x06-regular_expressions`
- File: `100-textme.rb`
