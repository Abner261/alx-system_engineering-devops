#### 0x05. Processes and signals

#### Resources
##### Read or watch:

- [Linux PID](https://www.linfo.org/pid.html)
- [Linux process](https://www.thegeekstuff.com/2012/03/linux-processes-environment/)
- [Linux signal](https://www.educative.io/answers/what-are-linux-signals)
- [Process management in linux](https://www.digitalocean.com/community/tutorials/process-management-in-linux)

##### man or help:

- `ps`
- `pgrep`
- `pkill`
- `kill`
- `exit`
- `trap`

#### Learning Objectives
- At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google:**

#### General
- What is a PID
- What is a process
- How to find a process’ PID
- How to kill a process
- What is a signal
- What are the 2 signals that cannot be ignored

#### Requirements
##### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted on Ubuntu 20.04 LTS
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- All your Bash script files must be executable
- Your Bash script must pass `Shellcheck` (version `0.7.0` via `apt-get`) without any error
- The first line of all your Bash scripts should be exactly `#!/usr/bin/env bash`
- The second line of all your Bash scripts should be a comment explaining what is the script doing

#### More Info
- For those who want to know more and learn about all signals, check out [this article](https://www.computerhope.com/unix/signals.htm)

0. [What is my PID](./0-what-is-my-pid)

- Write a Bash script that displays its own PID
	
	```sh
	
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# vi 0-what-is-my-pid
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# chmod u+x 0-what-is-my-pid
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# ls
	0-what-is-my-pid  README.md
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# ./0-what-is-my-pid
	14617
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# 
	
	```
- **For your Information**
- _This may vary on your machine_
##### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x05-processes_and_signals`
- File: `0-what-is-my-pid`

1. [List your processes](./1-list_your_processes)

- Write a Bash script that displays a list of currently running processes

##### Requirements:

   - Must show all processes, for all users, including those which might not have a TTY
   - Display in a user-oriented format
   - Show process hierarchy

##### Repo:

   - GitHub repository: `alx-system_engineering-devops`
   - Directory: `0x05-processes_and_signals`
   - File: `1-list_your_processes`

	```sh
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# vi 1-list_your_processes
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# chmod u+x 1-list_your_processes
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# ./1-list_your_processes | head -50
	USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
	root     14668  0.0  0.0   7236  4012 pts/346  Ss   03:09   0:00 /bin/bash
	root     14747  0.0  0.0   6972  3292 pts/346  S+   05:00   0:00  \_ bash ./1-list_your_processes
	root     14749  0.0  0.0   9428  3708 pts/346  R+   05:00   0:00  |   \_ ps aux f
	root     14748  0.0  0.0   5488   568 pts/346  S+   05:00   0:00  \_ head -50
	root     14655  0.0  0.0   7236  3888 pts/345  Ss+  03:05   0:00 /bin/bash
	root     14584  0.0  0.0   7236  3968 pts/344  Ss+  02:10   0:00 /bin/bash
	root     14555  0.0  0.0   7236  4016 pts/343  Ss+  Mar17   0:00 /bin/bash
	root     14525  0.0  0.0   7236  3948 pts/342  Ss+  Mar17   0:00 /bin/bash
	root     14499  0.0  0.0   7236  3720 pts/341  Ss+  Mar17   0:00 /bin/bash
	root     14481  0.0  0.0   7236  3752 pts/340  Ss   Mar17   0:00 /bin/bash
	root     14498  0.0  0.0  22788 10452 pts/340  S+   Mar17   0:00  \_ vi README.md
	root     14461  0.0  0.0   7236  3664 pts/339  Ss+  Mar17   0:00 /bin/bash
	root     14449  0.0  0.0   7236  3700 pts/338  Ss+  Mar17   0:00 /bin/bash
	root     14427  0.0  0.0   7236  3716 pts/337  Ss+  Mar17   0:00 /bin/bash
	root     14404  0.0  0.0   7236  3772 pts/336  Ss   Mar17   0:00 /bin/bash
	root     14426  0.0  0.0  22844 10792 pts/336  S+   Mar17   0:01  \_ vi README.md
	root     13815  0.0  0.0   7236  3660 pts/335  Ss+  Mar16   0:00 /bin/bash
	root     13574  0.0  0.0   7236  3500 pts/334  Ss+  Mar16   0:00 /bin/bash
	root     13517  0.0  0.0   7236  3348 pts/333  Ss+  Mar15   0:00 /bin/bash
	root     13489  0.0  0.0   7236  3268 pts/332  Ss+  Mar15   0:00 /bin/bash
	root     13425  0.0  0.0   7236  3224 pts/331  Ss   Mar15   0:00 /bin/bash
	root     13488  0.0  0.0  22256  6372 pts/331  S+   Mar15   0:00  \_ vi 5-4_bad_luck_8_is_your_chance
	root     13234  0.0  0.0   7236   912 pts/330  Ss+  Mar14   0:00 /bin/bash
	root     13220  0.0  0.0   7236   888 pts/329  Ss+  Mar14   0:00 /bin/bash
	root     13204  0.0  0.0   7236   880 pts/328  Ss+  Mar14   0:00 /bin/bash
	root     13178  0.0  0.0   7236   812 pts/327  Ss+  Mar13   0:00 /bin/bash
	root     13153  0.0  0.0   7236   860 pts/326  Ss+  Mar12   0:00 /bin/bash
	root     13134  0.0  0.0   7236   812 pts/325  Ss+  Mar11   0:00 /bin/bash
	root     13085  0.0  0.0   7236   804 pts/324  Ss+  Mar11   0:00 /bin/bash
	root     13066  0.0  0.0   7236   812 pts/323  Ss   Mar11   0:00 /bin/bash
	root     13084  0.0  0.0  22828  4628 pts/323  S+   Mar11   0:01  \_ vi README.md
	root     13029  0.0  0.0   7236   808 pts/322  Ss+  Mar10   0:00 /bin/bash
	root     13006  0.0  0.0   7236   808 pts/321  Ss+  Mar10   0:00 /bin/bash
	root     12984  0.0  0.0   7236   808 pts/320  Ss   Mar09   0:00 /bin/bash
	root     13005  0.0  0.0  22712  4640 pts/320  S+   Mar09   0:00  \_ vi README.md
	root     12955  0.0  0.0   7236   808 pts/319  Ss+  Mar09   0:00 /bin/bash
	root     12941  0.0  0.0   7236   756 pts/318  Ss+  Mar09   0:00 /bin/bash
	root     12914  0.0  0.0   7236   804 pts/317  Ss+  Mar08   0:00 /bin/bash
	root     12902  0.0  0.0   7236   744 pts/316  Ss+  Mar08   0:00 /bin/bash
	root     12886  0.0  0.0   7236   796 pts/315  Ss   Mar08   0:00 /bin/bash
	root     12901  0.0  0.0  22776  4684 pts/315  S+   Mar08   0:00  \_ vi README.md
	root     12874  0.0  0.0   7236   756 pts/314  Ss+  Mar07   0:00 /bin/bash
	root     12832  0.0  0.0   7236   808 pts/313  Ss+  Mar07   0:00 /bin/bash
	root     12761  0.0  0.0   7236   832 pts/312  Ss   Mar07   0:00 /bin/bash
	root     12831  0.0  0.0  21836  3696 pts/312  S+   Mar07   0:00  \_ vi __init__.cpython-36.pyc
	root     12719  0.0  0.0   7236   824 pts/311  Ss+  Mar07   0:00 /bin/bash
	root     12647  0.0  0.0   7236   824 pts/310  Ss+  Mar06   0:00 /bin/bash
	root     12623  0.0  0.0   7236   804 pts/309  Ss+  Mar06   0:00 /bin/bash
	root     12604  0.0  0.0   7236   808 pts/308  Ss   Mar06   0:00 /bin/bash
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals#
	```

2. [Show your Bash PID](./2-show_your_bash_pid)

- Using your previous exercise command, write a Bash script that displays lines containing the `bash` word, thus allowing you to easily get the PID of your Bash process.

##### Requirements:

   - You cannot use `pgrep`
   - The third line of your script must be `# shellcheck disable=SC2009` (for more info about ignoring `shellcheck` error [here](https://github.com/koalaman/shellcheck/wiki/Ignore))

##### Repo:

   - GitHub repository: `alx-system_engineering-devops`
   - Directory: `0x05-processes_and_signals`
   - File: `2-show_your_bash_pid`

	```sh
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# vi 2-show_your_bash_pid
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# chmod u+x 2-show_your_bash_pid
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# ./2-show_your_bash_pid
	root     14668  0.0  0.0   7236  4012 pts/346  Ss   03:09   0:00 /bin/bash
	root     14789  0.0  0.0   6972  3312 pts/346  S+   06:00   0:00  \_ bash ./2-show_your_bash_pid
	root     14791  0.0  0.0   6300   712 pts/346  S+   06:00   0:00      \_ grep bash
	root     14655  0.0  0.0   7236  3888 pts/345  Ss+  03:05   0:00 /bin/bash
	root     14584  0.0  0.0   7236  3968 pts/344  Ss+  02:10   0:00 /bin/bash
	```

3. [Show your Bash PID made easy](./3-show_your_bash_pid_made_easy)

- Write a Bash script that displays the PID, along with the process name, of processes whose name contain the word `bash`

##### Requirements:

  - You cannot use `ps`

	```sh
	sylvain@ubuntu$ ./3-show_your_bash_pid_made_easy
	4404 bash
	4555 bash
	sylvain@ubuntu$ ./3-show_your_bash_pid_made_easy
	4404 bash
	4557 bash
	sylvain@ubuntu$
	```
##### Here we can see that:

   - For the first iteration: `bash` PID is `4404` and that the `3-show_your_bash_pid_made_easy` script PID is `4555`
   - For the second iteration:`bash` PID is `4404` and that the `3-show_your_bash_pid_made_easy` script PID is `4557`
##### Repo:

   - GitHub repository: alx-system_engineering-devops
   - Directory: 0x05-processes_and_signals
   - File: `3-show_your_bash_pid_made_easy`

4. [To infinity and beyond](./4-to_infinity_and_beyond)

- Write a Bash script that displays `To infinity and beyond` indefinitely.

##### Requirements:

   - In between each iteration of the loop, add a `sleep 2`

	```sh
	
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# vi 4-to_infinity_and_beyond
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# chmod u+x 4-to_infinity_and_beyond
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# ./4-to_infinity_and_beyond
	To infinity and beyond
	To infinity and beyond
	To infinity and beyond
	To infinity and beyond
	^C
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals#
	```

#### Note that I `ctrl+c` (killed) the Bash script in the example.

#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x05-processes_and_signals`
- File: `4-to_infinity_and_beyond`

5. [Don't stop me now!](./5-dont_stop_me_now)

- We stopped our `4-to_infinity_and_beyond` process using `ctrl+c` in the previous task, there is actually another way to do this.

- Write a Bash script that stops `4-to_infinity_and_beyond` process

- Requirements:

	- You must use `kill`
- Terminal #0

- Terminal #1

- I opened 2 terminals in this example, started by running my `4-to_infinity_and_beyond` Bash script in terminal #0 and then moved on terminal #1 to run `5-dont_stop_me_now`. We can then see in terminal #0 that my process has been terminated.

#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x05-processes_and_signals`
- File: `5-dont_stop_me_now`

6. [Stop me if you can](./6-stop_me_if_you_can)

- Write a Bash script that stops `4-to_infinity_and_beyond` process

- Requirements:

   - You cannot use kill or killall
- Terminal #0

- Terminal #1

- I opened 2 terminals in this example, started by running my `4-to_infinity_and_beyond` Bash script in terminal #0 and then moved on terminal #1 to run `6-stop_me_if_you_can`. We can then see in terminal #0 that my process has been terminated.

#### Repo:

   - GitHub repository: alx-system_engineering-devops
   - Directory: 0x05-processes_and_signals
   - File: `6-stop_me_if_you_can`

7. [Highlander](./7-highlander)

- Write a Bash script that displays:

- `To infinity and beyond` indefinitely
- With a `sleep 2` in between each iteration
- `I am invincible!!!` when receiving a `SIGTERM` signal
- Make a copy of your `6-stop_me_if_you_can` script, name it `67-stop_me_if_you_can`, that kills the `7-highlander` process instead of the `4-to_infinity_and_beyond one`.

- Terminal #0

- Terminal #1

- I started `7-highlander` in Terminal #0 and then run `67-stop_me_if_you_can` in terminal #1, for every iteration we can see `I am invincible!!!` appearing in terminal #0.

#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x05-processes_and_signals`
- File: `7-highlander`

8. [Beheaded process](./8-beheaded_process)

- Write a Bash script that kills the process `7-highlander`.

- Terminal #0

- Terminal #1

- I started `7-highlander` in Terminal #0 and then run `8-beheaded_process` in terminal #1 and we can see that the `7-highlander` has been killed.

#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x05-processes_and_signals`
- File: `8-beheaded_process`

9. [Process and PID file](./100-process_and_pid_file)

- Write a Bash script that:

      - Creates the file `/var/run/myscript.pid` containing its PID
      - Displays `To infinity and beyond` indefinitely
      - Displays `I hate the kill command` when receiving a SIGTERM signal
      - Displays `Y U no love me?!` when receiving a SIGINT signal
      - Deletes the file `/var/run/myscript.pid` and terminates itself when receiving a SIGQUIT or SIGTERM signal

- Executing the `100-process_and_pid_file` script and killing it with `ctrl+c`

- Terminal #0

- Terminal #1

Starting 100-process_and_pid_file in the terminal #0 and then killing it in the terminal #1.

#### Repo:

- GitHub repository: `alx-system_engineering-devops`
- Directory: `0x05-processes_and_signals`
- File: `100-process_and_pid_file`

10. [Manage my process](./101-manage_my_process)

#### Read:

	- [&](https://bashitout.com/2013/05/18/Ampersands-on-the-command-line.html)
	- [init.d](https://www.ghacks.net/2009/04/04/get-to-know-linux-the-etcinitd-directory/)
	- [Daemon](https://en.wikipedia.org/wiki/Daemon_%28computing%29)
	- [Positional parameters](https://www.gnu.org/software/bash/manual/html_node/Positional-Parameters.html)
- man: `sudo`

- Programs that are detached from the terminal and running in the background are called daemons or processes, need to be managed. The general minimum set of instructions is: `start`, `restart` and `stop`. The most popular way of doing so on Unix system is to use the init scripts.

- Write a `manage_my_process` Bash script that:

	- Indefinitely writes `I am alive!` to the file `/tmp/my_process`
	- In between every `I am alive!` message, the program should pause for 2 seconds
- Write Bash (init) script `101-manage_my_process` that manages `manage_my_process`. (both files need to be pushed to git)

#### Requirements:

	- When passing the argument `start`:
	    - Starts `manage_my_process`
	    - Creates a file containing its PID in `/var/run/my_process.pid`
	    - Displays `manage_my_process started`
	- When passing the argument `stop`:
	    - Stops `manage_my_process`
	    - Deletes the file `/var/run/my_process.pid`
	    - Displays `manage_my_process stopped`
	- When passing the argument `restart`
	    - Stops `manage_my_process`
	    - Deletes the file `/var/run/my_process.pid`
	    - Starts `manage_my_process`
	    - Creates a file containing its PID in `/var/run/my_process.pid`
	    - Displays `manage_my_process restarted`
	- Displays `Usage: manage_my_process {start|stop|restart}` if any other argument or no argument is passed
- Note that this init script is far from being perfect (but good enough for the sake of manipulating process and PID file), for example we do not handle the case where we check if a process is already running when doing `./101-manage_my_process start`, in our case it will simply create a new process instead of saying that it is already started.

#### Repo:

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x05-processes_and_signals`
	- File: `101-manage_my_process, manage_my_process`

11. [Zombie](./zombie )

- Read [what a zombie process is](https://zombieprocess.wordpress.com/what-is-a-zombie-process/).

- Write a C program that creates 5 zombie processes.

#### Requirements:

	- For every zombie process created, it displays `Zombie process created, PID: ZOMBIE_PID`
	- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
	- When your code is done creating the parent process and the zombies, use the function bellow

```c
int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}
```
- Example:

- Terminal #0

- Terminal #1

- In Terminal #0, I start by compiling `102-zombie.c` and executing `zombie` which creates 5 zombie processes. In Terminal #1, I display the list of processes and look for lines containing `Z+.*<defunct>` which catches zombie process.

#### Repo:

	- GitHub repository: `alx-system_engineering-devops`
	- Directory: `0x05-processes_and_signals`
	- File: `102-zombie.c`
