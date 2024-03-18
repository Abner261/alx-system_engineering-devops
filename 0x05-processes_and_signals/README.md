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

- Write a Bash script that displays a list of currently running processes.

	```sh
	
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# vi 1-list_your_processes
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# chmod u+x 1-list_your_processes
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# ./1-list_your_processes
	USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
	root     14668  0.0  0.0   7236  4008 pts/346  Ss   03:09   0:00 /bin/bash
	root     14700  0.0  0.0   6972  3380 pts/346  S+   04:00   0:00  \_ bash ./1-list_your_processes
	root     14701  0.0  0.0   9428  3712 pts/346  R+   04:00   0:00      \_ ps aux f
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
	root     12622  0.0  0.0  21860  3900 pts/308  S+   Mar06   0:00  \_ vi __init__.py
	root     12586  0.0  0.0   7236   800 pts/307  Ss+  Mar06   0:00 /bin/bash
	root     12574  0.0  0.0   7236   748 pts/306  Ss+  Mar05   0:00 /bin/bash
	root     12540  0.0  0.0   7236   812 pts/305  Ss+  Mar05   0:00 /bin/bash
	root     12527  0.0  0.0   7236   756 pts/304  Ss+  Mar05   0:00 /bin/bash
	root     12491  0.0  0.0   7236   800 pts/303  Ss+  Mar04   0:00 /bin/bash
	root     12449  0.0  0.0   7236   796 pts/302  Ss+  Mar04   0:00 /bin/bash
	root     12388  0.0  0.0   7236   836 pts/301  Ss+  Mar04   0:00 /bin/bash
	root     12366  0.0  0.0   7236   796 pts/300  Ss+  Mar04   0:00 /bin/bash
	root     12345  0.0  0.0   7236   752 pts/299  Ss+  Mar04   0:00 /bin/bash
	root     12312  0.0  0.0   7236   796 pts/298  Ss+  Mar04   0:00 /bin/bash
	root     12211  0.0  0.0   7236   808 pts/297  Ss+  Mar03   0:00 /bin/bash
	root     12189  0.0  0.0   7236   796 pts/296  Ss   Mar03   0:00 /bin/bash
	root     12210  0.0  0.0  22700  4600 pts/296  S+   Mar03   0:00  \_ vi .git
	root     12167  0.0  0.0   7236   816 pts/295  Ss+  Mar03   0:00 /bin/bash
	root     12133  0.0  0.0   7236   804 pts/294  Ss+  Mar03   0:00 /bin/bash
	root     12095  0.0  0.0   7236   800 pts/293  Ss+  Mar03   0:00 /bin/bash
	root     12066  0.0  0.0   7236   804 pts/292  Ss+  Mar02   0:00 /bin/bash
	root     12036  0.0  0.0   7236   800 pts/291  Ss+  Mar01   0:00 /bin/bash
	root     12006  0.0  0.0   7236   804 pts/290  Ss+  Mar01   0:00 /bin/bash
	root     11974  0.0  0.0   7236   808 pts/289  Ss+  Feb29   0:00 /bin/bash
	root     11961  0.0  0.0   7236   756 pts/288  Ss+  Feb29   0:00 /bin/bash
	root     11948  0.0  0.0   7236   748 pts/287  Ss+  Feb29   0:00 /bin/bash
	root     11895  0.0  0.0   7236   804 pts/286  Ss+  Feb28   0:00 /bin/bash
	root     11854  0.0  0.0   7236   788 pts/285  Ss+  Feb28   0:00 /bin/bash
	root     11825  0.0  0.0   7236   800 pts/284  Ss+  Feb27   0:00 /bin/bash
	root     11761  0.0  0.0   7236   816 pts/283  Ss   Feb27   0:00 /bin/bash
	root     11824  0.0  0.0  22708  4616 pts/283  S+   Feb27   0:00  \_ vi command_line_for_the_win/
	root     11704  0.0  0.0   7236   764 pts/282  Ss+  Feb27   0:00 /bin/bash
	root     11660  0.0  0.0   7236   752 pts/281  Ss   Feb27   0:00 /bin/bash
	root     11703  0.0  0.0  21860  3852 pts/281  S+   Feb27   0:00  \_ vi 11-student.py
	root     11593  0.0  0.0   7236   760 pts/280  Ss+  Feb27   0:00 /bin/bash
	root     11553  0.0  0.0   7236   764 pts/279  Ss+  Feb26   0:00 /bin/bash
	root     11537  0.0  0.0   7236   756 pts/278  Ss+  Feb26   0:00 /bin/bash
	root     11524  0.0  0.0   7236   704 pts/277  Ss+  Feb26   0:00 /bin/bash
	root     11495  0.0  0.0   7236   756 pts/276  Ss+  Feb26   0:00 /bin/bash
	root     11344  0.0  0.0   7236   768 pts/275  Ss+  Feb26   0:00 /bin/bash
	root     11330  0.0  0.0   7236   708 pts/274  Ss+  Feb26   0:00 /bin/bash
	root     11301  0.0  0.0   7236   776 pts/273  Ss+  Feb25   0:00 /bin/bash
	root     11192  0.0  0.0   7236   764 pts/272  Ss+  Feb25   0:00 /bin/bash
	root     11180  0.0  0.0   7236   700 pts/271  Ss+  Feb25   0:00 /bin/bash
	root     11169  0.0  0.0   7236   700 pts/270  Ss+  Feb24   0:00 /bin/bash
	root     11066  0.0  0.0   7236   756 pts/269  Ss+  Feb24   0:00 /bin/bash
	root     11053  0.0  0.0   7236   708 pts/268  Ss+  Feb24   0:00 /bin/bash
	root     11002  0.0  0.0   7236   764 pts/267  Ss+  Feb23   0:00 /bin/bash
	root     10884  0.0  0.0   7236   760 pts/266  Ss+  Feb22   0:00 /bin/bash
	root     10840  0.0  0.0   7236   760 pts/265  Ss+  Feb22   0:00 /bin/bash
	root     10770  0.0  0.0   7236   768 pts/264  Ss+  Feb21   0:00 /bin/bash
	root     10658  0.0  0.0   7236   792 pts/263  Ss+  Feb21   0:00 /bin/bash
	root     10569  0.0  0.0   7236   748 pts/262  Ss+  Feb21   0:00 /bin/bash
	root     10552  0.0  0.0   7236   744 pts/261  Ss   Feb21   0:00 /bin/bash
	root     10568  0.0  0.0  21624  3524 pts/261  S+   Feb21   0:00  \_ vi
	root     10467  0.0  0.0   7236   768 pts/260  Ss+  Feb21   0:00 /bin/bash
	root     10439  0.0  0.0   7236   760 pts/259  Ss+  Feb20   0:00 /bin/bash
	root     10356  0.0  0.0   7236   760 pts/258  Ss+  Feb19   0:00 /bin/bash
	root     10289  0.0  0.0   7236   760 pts/257  Ss+  Feb19   0:00 /bin/bash
	root     10276  0.0  0.0   7236   704 pts/256  Ss+  Feb19   0:00 /bin/bash
	root     10206  0.0  0.0   7236   756 pts/255  Ss+  Feb19   0:00 /bin/bash
	root     10193  0.0  0.0   7236   704 pts/254  Ss+  Feb19   0:00 /bin/bash
	root     10110  0.0  0.0   7236   756 pts/253  Ss+  Feb18   0:00 /bin/bash
	root      9917  0.0  0.0   7236   760 pts/252  Ss+  Feb18   0:00 /bin/bash
	root      9559  0.0  0.0   7236   772 pts/251  Ss+  Feb17   0:00 /bin/bash
	root      9542  0.0  0.0   7236   748 pts/250  Ss   Feb17   0:00 /bin/bash
	root      9558  0.0  0.0  22704  4540 pts/250  S+   Feb17   0:00  \_ vi README.md
	root      9471  0.0  0.0   7236   756 pts/249  Ss+  Feb17   0:00 /bin/bash
	root      9457  0.0  0.0   7236   708 pts/248  Ss+  Feb17   0:00 /bin/bash
	root      9444  0.0  0.0   7236   720 pts/247  Ss+  Feb17   0:00 /bin/bash
	root      9416  0.0  0.0   7236   748 pts/246  Ss+  Feb16   0:00 /bin/bash
	root      9389  0.0  0.0   7236   752 pts/245  Ss+  Feb16   0:00 /bin/bash
	root      9320  0.0  0.0   7236   756 pts/244  Ss+  Feb15   0:00 /bin/bash
	root      9279  0.0  0.0   7236   756 pts/243  Ss+  Feb15   0:00 /bin/bash
	root      9251  0.0  0.0   7236   756 pts/242  Ss+  Feb14   0:00 /bin/bash
	root      9188  0.0  0.0   7236   752 pts/241  Ss+  Feb14   0:00 /bin/bash
	root      9166  0.0  0.0   7236   744 pts/240  Ss   Feb14   0:00 /bin/bash
	root      9187  0.0  0.0  22852  4540 pts/240  S+   Feb14   0:01  \_ vi README.md
	root      9137  0.0  0.0   7236   752 pts/239  Ss+  Feb14   0:00 /bin/bash
	root      9125  0.0  0.0   7236   700 pts/238  Ss+  Feb14   0:00 /bin/bash
	root      9011  0.0  0.0   7236   804 pts/237  Ss+  Feb13   0:00 /bin/bash
	root      9000  0.0  0.0   7236   708 pts/236  Ss+  Feb13   0:00 /bin/bash
	root      8972  0.0  0.0   7236   752 pts/235  Ss+  Feb13   0:00 /bin/bash
	root      8929  0.0  0.0   7236   760 pts/234  Ss   Feb13   0:00 /bin/bash
	root      8971  0.0  0.0  21860  3832 pts/234  S+   Feb13   0:00  \_ vi 5-text_indentation.py
	root      8900  0.0  0.0   7236   748 pts/233  Ss+  Feb12   0:00 /bin/bash
	root      8866  0.0  0.0   7236   760 pts/232  Ss+  Feb12   0:00 /bin/bash
	root      8828  0.0  0.0   7236   760 pts/231  Ss+  Feb12   0:00 /bin/bash
	root      8796  0.0  0.0   7236   756 pts/230  Ss+  Feb12   0:00 /bin/bash
	root      8648  0.0  0.0   7236   760 pts/229  Ss+  Feb11   0:00 /bin/bash
	root      8589  0.0  0.0   7236   784 pts/228  Ss+  Feb11   0:00 /bin/bash
	root      8536  0.0  0.0   7236   756 pts/227  Ss+  Feb11   0:00 /bin/bash
	root      8463  0.0  0.0   7236   772 pts/226  Ss+  Feb10   0:00 /bin/bash
	root      8434  0.0  0.0   7236   752 pts/225  Ss+  Feb10   0:00 /bin/bash
	root      8406  0.0  0.0   7236   756 pts/224  Ss+  Feb10   0:00 /bin/bash
	root      8364  0.0  0.0   7236   760 pts/223  Ss+  Feb09   0:00 /bin/bash
	root      8344  0.0  0.0   7236   748 pts/222  Ss   Feb09   0:00 /bin/bash
	root      8363  0.0  0.0  21856  3832 pts/222  S+   Feb09   0:00  \_ vi 1-square.py
	root      8228  0.0  0.0   7236   764 pts/221  Ss+  Feb08   0:00 /bin/bash
	root      8158  0.0  0.0   7236   756 pts/220  Ss+  Feb08   0:00 /bin/bash
	root      8079  0.0  0.0   7236   764 pts/219  Ss+  Feb08   0:00 /bin/bash
	root      7971  0.0  0.0   7236   760 pts/218  Ss+  Feb08   0:00 /bin/bash
	root      7955  0.0  0.0   7236   752 pts/217  Ss   Feb08   0:00 /bin/bash
	root      7970  0.0  0.0  21860  3836 pts/217  S+   Feb08   0:00  \_ vi 3-safe_print_division.py
	root      7923  0.0  0.0   7236   760 pts/216  Ss+  Feb07   0:00 /bin/bash
	root      7872  0.0  0.0   7236   760 pts/215  Ss   Feb07   0:00 /bin/bash
	root      7922  0.0  0.0  21860  3828 pts/215  S+   Feb07   0:00  \_ vi 2-safe_print_list_integers.py
	root      7857  0.0  0.0   7236   748 pts/214  Ss+  Feb07   0:00 /bin/bash
	root      7824  0.0  0.0   7236   760 pts/213  Ss+  Feb07   0:00 /bin/bash
	root      7793  0.0  0.0   7236   752 pts/212  Ss+  Feb06   0:00 /bin/bash
	root      7741  0.0  0.0   7236   760 pts/211  Ss+  Feb06   0:00 /bin/bash
	root      7660  0.0  0.0   7236   764 pts/210  Ss+  Feb06   0:00 /bin/bash
	root      7632  0.0  0.0   7236   752 pts/209  Ss+  Feb05   0:00 /bin/bash
	root      7597  0.0  0.0   7236   752 pts/208  Ss   Feb05   0:00 /bin/bash
	root      7631  0.0  0.0  21904  3680 pts/208  S+   Feb05   0:00  \_ vi 100-weight_average.py
	root      7508  0.0  0.0   7236   764 pts/207  Ss+  Feb05   0:00 /bin/bash
	root      7462  0.0  0.0   7236   760 pts/206  Ss   Feb05   0:00 /bin/bash
	root      7507  0.0  0.0  21864  3844 pts/206  S+   Feb05   0:00  \_ vi 9-multiply_by_2.py
	root      7402  0.0  0.0   7236   760 pts/205  Ss+  Feb04   0:00 /bin/bash
	root      7357  0.0  0.0   7236   756 pts/204  Ss+  Feb04   0:00 /bin/bash
	root      7203  0.0  0.0   7236   756 pts/203  Ss+  Feb04   0:00 /bin/bash
	root      7190  0.0  0.0   7236   704 pts/202  Ss+  Feb04   0:00 /bin/bash
	root      7130  0.0  0.0   7236   760 pts/201  Ss+  Feb03   0:00 /bin/bash
	root      7118  0.0  0.0   7236   700 pts/200  Ss+  Feb03   0:00 /bin/bash
	root      7088  0.0  0.0   7236   760 pts/199  Ss+  Feb02   0:00 /bin/bash
	root      7038  0.0  0.0   7236   756 pts/198  Ss+  Feb02   0:00 /bin/bash
	root      6972  0.0  0.0   7236   760 pts/197  Ss+  Feb02   0:00 /bin/bash
	root      6955  0.0  0.0   7236   744 pts/196  Ss   Feb01   0:00 /bin/bash
	root      6971  0.0  0.0  22108  3916 pts/196  S+   Feb01   0:00  \_ vi 100-print_python_list_info.c
	root      6917  0.0  0.0   7236   760 pts/195  Ss+  Feb01   0:00 /bin/bash
	root      6905  0.0  0.0   7236   696 pts/194  Ss+  Feb01   0:00 /bin/bash
	root      6866  0.0  0.0   7236   768 pts/193  Ss+  Jan31   0:00 /bin/bash
	root      6837  0.0  0.0   7236   756 pts/192  Ss+  Jan31   0:00 /bin/bash
	root      6781  0.0  0.0   7236   756 pts/191  Ss+  Jan31   0:00 /bin/bash
	root      6739  0.0  0.0   7236   756 pts/190  Ss+  Jan31   0:00 /bin/bash
	root      6697  0.0  0.0   7236   756 pts/189  Ss+  Jan31   0:00 /bin/bash
	root      6680  0.0  0.0   7236   720 pts/188  Ss+  Jan31   0:00 /bin/bash
	root      6647  0.0  0.0   7236   760 pts/187  Ss+  Jan30   0:00 /bin/bash
	root      6616  0.0  0.0   7236   760 pts/186  Ss+  Jan30   0:00 /bin/bash
	root      6569  0.0  0.0   7236   760 pts/185  Ss+  Jan29   0:00 /bin/bash
	root      6518  0.0  0.0   7236   656 pts/184  Ss+  Jan29   0:00 /bin/bash
	root      6462  0.0  0.0   7236   612 pts/183  Ss+  Jan29   0:00 /bin/bash
	root      6400  0.0  0.0   7236   600 pts/182  Ss+  Jan29   0:00 /bin/bash
	root      6384  0.0  0.0   7236   544 pts/181  Ss+  Jan29   0:00 /bin/bash
	root      6355  0.0  0.0   7236   596 pts/180  Ss+  Jan28   0:00 /bin/bash
	root      6325  0.0  0.0   7236   596 pts/179  Ss+  Jan28   0:00 /bin/bash
	root      6296  0.0  0.0   7236   244 pts/178  Ss   Jan28   0:00 /bin/bash
	root      6324  0.0  0.0  21868  3552 pts/178  S+   Jan28   0:00  \_ vi 102-magic_calculation.py
	root      6280  0.0  0.0   7236    12 pts/177  Ss   Jan28   0:00 /bin/bash
	root      6295  0.0  0.0  21868   120 pts/177  S+   Jan28   0:00  \_ vi 101-easy_print.py
	root      6227  0.0  0.0   7236    12 pts/176  Ss+  Jan27   0:00 /bin/bash
	root      6214  0.0  0.0   7236    20 pts/175  Ss+  Jan27   0:00 /bin/bash
	root      6184  0.0  0.0   7236    12 pts/174  Ss+  Jan27   0:00 /bin/bash
	root      6173  0.0  0.0   7236   204 pts/173  Ss+  Jan27   0:00 /bin/bash
	root      6146  0.0  0.0   7236    16 pts/172  Ss+  Jan27   0:00 /bin/bash
	root      6115  0.0  0.0   7236    16 pts/171  Ss   Jan27   0:00 /bin/bash
	root      6145  0.0  0.0  21872   144 pts/171  S+   Jan27   0:00  \_ vi 4-hidden_discovery.py
	root      6064  0.0  0.0   7236    36 pts/170  Ss+  Jan26   0:00 /bin/bash
	root      6050  0.0  0.0   7236    24 pts/169  Ss+  Jan26   0:00 /bin/bash
	root      6019  0.0  0.0   7236     8 pts/168  Ss   Jan26   0:00 /bin/bash
	root      6049  0.0  0.0  21868   140 pts/168  S+   Jan26   0:00  \_ vi 2-args.py
	root      5968  0.0  0.0   7236    24 pts/167  Ss+  Jan26   0:00 /bin/bash
	root      5945  0.0  0.0   7236    20 pts/166  Ss   Jan26   0:00 /bin/bash
	root      5967  0.0  0.0  22704    64 pts/166  S+   Jan26   0:00  \_ vi README.md
	root      5931  0.0  0.0   7236     8 pts/165  Ss+  Jan26   0:00 /bin/bash
	root      5887  0.0  0.0   7236    96 pts/164  Ss+  Jan25   0:00 /bin/bash
	root      5875  0.0  0.0   7236   128 pts/163  Ss+  Jan25   0:00 /bin/bash
	root      5861  0.0  0.0   7236     8 pts/162  Ss+  Jan25   0:00 /bin/bash
	root      5831  0.0  0.0   7236    36 pts/161  Ss+  Jan24   0:00 /bin/bash
	root      5768  0.0  0.0   7236   160 pts/160  Ss+  Jan24   0:00 /bin/bash
	root      5738  0.0  0.0   7236    32 pts/159  Ss+  Jan24   0:00 /bin/bash
	root      5693  0.0  0.0   7236    12 pts/158  Ss+  Jan23   0:00 /bin/bash
	root      5651  0.0  0.0   7236    32 pts/157  Ss+  Jan23   0:00 /bin/bash
	root      5635  0.0  0.0   7236     8 pts/156  Ss+  Jan23   0:00 /bin/bash
	root      5579  0.0  0.0   7236    60 pts/155  Ss+  Jan22   0:00 /bin/bash
	root      5542  0.0  0.0   7236    84 pts/154  Ss   Jan22   0:00 /bin/bash
	root      5578  0.0  0.0  21904    36 pts/154  S+   Jan22   0:00  \_ vi function that checks for lowercase character
	root      5529  0.0  0.0   7236     8 pts/153  Ss+  Jan22   0:00 /bin/bash
	root      5489  0.0  0.0   7236    48 pts/152  Ss+  Jan22   0:00 /bin/bash
	root      5453  0.0  0.0   7236    36 pts/151  Ss   Jan22   0:00 /bin/bash
	root      5488  0.0  0.0  21872    84 pts/151  S+   Jan22   0:00  \_ vi 7-islower.py
	root      5380  0.0  0.0   7236    32 pts/150  Ss   Jan22   0:00 /bin/bash
	root      5452  0.0  0.0  21872   436 pts/150  S+   Jan22   0:00  \_ vi 6-print_comb3.py
	root      5337  0.0  0.0   7236    28 pts/149  Ss+  Jan21   0:00 /bin/bash
	root      5306  0.0  0.0   7236    12 pts/148  Ss   Jan21   0:00 /bin/bash
	root      5336  0.0  0.0  21872   104 pts/148  S+   Jan21   0:00  \_ vi 4-print_hexa.py
	root      5247  0.0  0.0   7236    12 pts/147  Ss   Jan21   0:00 /bin/bash
	root      5305  0.0  0.0  21872   120 pts/147  S+   Jan21   0:00  \_ vi 3-print_alphabt.py
	root      5207  0.0  0.0   7236    12 pts/146  Ss+  Jan20   0:00 /bin/bash
	root      5188  0.0  0.0   7236    28 pts/145  Ss   Jan20   0:00 /bin/bash
	root      5206  0.0  0.0  21872   100 pts/145  S+   Jan20   0:00  \_ vi 1-last_digit.py
	root      5176  0.0  0.0   7236     8 pts/144  Ss+  Jan20   0:00 /bin/bash
	root      5089  0.0  0.0   7236    20 pts/143  Ss+  Jan19   0:00 /bin/bash
	root      5076  0.0  0.0   7236     0 pts/142  Ss+  Jan19   0:00 /bin/bash
	root      4987  0.0  0.0   7236    20 pts/141  Ss+  Jan18   0:00 /bin/bash
	root      4968  0.0  0.0   7236    12 pts/140  Ss   Jan18   0:00 /bin/bash
	root      4986  0.0  0.0  22112    44 pts/140  S+   Jan18   0:00  \_ vi 10-check_cycle.c
	root      4955  0.0  0.0   7236     8 pts/139  Ss+  Jan18   0:00 /bin/bash
	root      4885  0.0  0.0   7236    16 pts/138  Ss   Jan17   0:00 /bin/bash
	root      4954  0.0  0.0  21852    48 pts/138  S+   Jan17   0:00  \_ vi 10-check_cycle.c, lists.h
	root      4840  0.0  0.0   7236    28 pts/137  Ss+  Jan17   0:00 /bin/bash
	root      4826  0.0  0.0   7236     8 pts/136  Ss+  Jan16   0:00 /bin/bash
	root      4758  0.0  0.0   7236   116 pts/135  Ss+  Jan16   0:00 /bin/bash
	root      4740  0.0  0.0   7236     4 pts/134  Ss+  Jan16   0:00 /bin/bash
	root      4712  0.0  0.0   7236    24 pts/133  Ss+  Jan16   0:00 /bin/bash
	root      4668  0.0  0.0   7236    28 pts/132  Ss+  Jan16   0:00 /bin/bash
	root      4655  0.0  0.0   7236     8 pts/131  Ss+  Jan16   0:00 /bin/bash
	root      4642  0.0  0.0   7236     8 pts/130  Ss+  Jan16   0:00 /bin/bash
	root      4606  0.0  0.0   7236    40 pts/129  Ss+  Jan15   0:00 /bin/bash
	root      4578  0.0  0.0   7236    12 pts/128  Ss   Jan15   0:00 /bin/bash
	root      4605  0.0  0.0  21740   104 pts/128  S+   Jan15   0:00  \_ vi
	root      4566  0.0  0.0   7236     0 pts/127  Ss+  Jan15   0:00 /bin/bash
	root      4518  0.0  0.0   7236    28 pts/126  Ss   Jan15   0:00 /bin/bash
	root      4565  0.0  0.0  21868   116 pts/126  S+   Jan15   0:00  \_ vi 4-print_float.py
	root      4504  0.0  0.0   7236     8 pts/125  Ss+  Jan15   0:00 /bin/bash
	root      4350  0.0  0.0   7236    12 pts/124  Ss+  Jan15   0:00 /bin/bash
	root      4244  0.0  0.0   7236    16 pts/123  Ss+  Jan15   0:00 /bin/bash
	root      4227  0.0  0.0   7236    12 pts/122  Ss   Jan15   0:00 /bin/bash
	root      4243  0.0  0.0  22704    28 pts/122  S+   Jan15   0:00  \_ vi README.md
	root      4214  0.0  0.0   7236     4 pts/121  Ss+  Jan15   0:00 /bin/bash
	root      4202  0.0  0.0   7236     8 pts/120  Ss+  Jan14   0:00 /bin/bash
	root      4171  0.0  0.0   7236    12 pts/119  Ss+  Jan14   0:00 /bin/bash
	root      4159  0.0  0.0   7236     8 pts/118  Ss+  Jan14   0:00 /bin/bash
	root      4145  0.0  0.0   7236     8 pts/117  Ss+  Jan14   0:00 /bin/bash
	root      4127  0.0  0.0   7236     8 pts/116  Ss+  Jan13   0:00 /bin/bash
	root      4087  0.0  0.0   7236    12 pts/115  Ss+  Jan13   0:00 /bin/bash
	root      4069  0.0  0.0   7236    12 pts/114  Ss   Jan13   0:00 /bin/bash
	root      4086  0.0  0.0  22156    28 pts/114  S+   Jan13   0:00  \_ vi 9-print_comb.c
	root      4052  0.0  0.0   7236    12 pts/113  Ss   Jan13   0:00 /bin/bash
	root      4068  0.0  0.0  22172    28 pts/113  S+   Jan13   0:00  \_ vi 9-print_comb.c
	root      4040  0.0  0.0   7236     8 pts/112  Ss+  Jan13   0:00 /bin/bash
	root      4023  0.0  0.0   7236    12 pts/111  Ss   Jan13   0:00 /bin/bash
	root      4039  0.0  0.0  22112    28 pts/111  S+   Jan13   0:00  \_ vi 9-print_comb.c
	root      4010  0.0  0.0   7236     8 pts/110  Ss+  Jan13   0:00 /bin/bash
	root      3972  0.0  0.0   7236    12 pts/109  Ss+  Jan12   0:00 /bin/bash
	root      3960  0.0  0.0   7236     8 pts/108  Ss+  Jan12   0:00 /bin/bash
	root      3947  0.0  0.0   7236     8 pts/107  Ss+  Jan11   0:00 /bin/bash
	root      3907  0.0  0.0   7236    12 pts/106  Ss+  Jan11   0:00 /bin/bash
	root      3895  0.0  0.0   7236     0 pts/105  Ss+  Jan11   0:00 /bin/bash
	root      3852  0.0  0.0   7236    12 pts/104  Ss+  Jan10   0:00 /bin/bash
	root      3839  0.0  0.0   7236     8 pts/103  Ss+  Jan10   0:00 /bin/bash
	root      3797  0.0  0.0   7236    12 pts/102  Ss+  Jan09   0:00 /bin/bash
	root      3784  0.0  0.0   7236     8 pts/101  Ss+  Jan09   0:00 /bin/bash
	root      3740  0.0  0.0   7236     8 pts/100  Ss+  Jan09   0:00 /bin/bash
	root      3692  0.0  0.0   7236    12 pts/99   Ss+  Jan08   0:00 /bin/bash
	root      3679  0.0  0.0   7236     8 pts/98   Ss+  Jan08   0:00 /bin/bash
	root      3634  0.0  0.0   7236    12 pts/97   Ss+  Jan07   0:00 /bin/bash
	root      3622  0.0  0.0   7236     4 pts/96   Ss+  Jan07   0:00 /bin/bash
	root      3606  0.0  0.0   7236    12 pts/95   Ss   Jan07   0:00 /bin/bash
	root      3621  0.0  0.0  22112     0 pts/95   S+   Jan07   0:00  \_ vi 10-print_triangle.c
	root      3593  0.0  0.0   7236     8 pts/94   Ss+  Jan07   0:00 /bin/bash
	root      3521  0.0  0.0   7236    12 pts/93   Ss+  Jan06   0:00 /bin/bash
	root      3509  0.0  0.0   7236     8 pts/92   Ss+  Jan06   0:00 /bin/bash
	root      3497  0.0  0.0   7236     8 pts/91   Ss+  Jan06   0:00 /bin/bash
	root      3485  0.0  0.0   7236     8 pts/90   Ss+  Jan06   0:00 /bin/bash
	root      3473  0.0  0.0   7236     8 pts/89   Ss+  Jan06   0:00 /bin/bash
	root      3460  0.0  0.0   7236     8 pts/88   Ss+  Jan06   0:00 /bin/bash
	root      3444  0.0  0.0   7236    12 pts/87   Ss+  Jan06   0:00 /bin/bash
	root      3324  0.0  0.0   7236    12 pts/86   Ss+  Jan05   0:00 /bin/bash
	root      3312  0.0  0.0   7236     8 pts/85   Ss+  Jan05   0:00 /bin/bash
	root      3266  0.0  0.0   7236     8 pts/84   Ss+  Jan05   0:00 /bin/bash
	root      3254  0.0  0.0   7236     8 pts/83   Ss+  Jan05   0:00 /bin/bash
	root      3211  0.0  0.0   7236    12 pts/82   Ss+  Jan04   0:00 /bin/bash
	root      3198  0.0  0.0   7236     8 pts/81   Ss+  Jan04   0:00 /bin/bash
	root      3157  0.0  0.0   7236    12 pts/80   Ss+  Jan03   0:00 /bin/bash
	root      3118  0.0  0.0   7236     8 pts/79   Ss+  Jan02   0:00 /bin/bash
	root      3105  0.0  0.0   7236     8 pts/78   Ss+  Jan02   0:00 /bin/bash
	root      3086  0.0  0.0   7236    12 pts/77   Ss+  Jan01   0:00 /bin/bash
	root      3072  0.0  0.0   7236     8 pts/76   Ss+  Jan01   0:00 /bin/bash
	root      3032  0.0  0.0   7236    12 pts/75   Ss+  Jan01   0:00 /bin/bash
	root      3020  0.0  0.0   7236     8 pts/74   Ss+  Jan01   0:00 /bin/bash
	root      2991  0.0  0.0   7236     8 pts/73   Ss    2023   0:00 /bin/bash
	root      3003  0.0  0.0   6984    12 pts/73   S+    2023   0:00  \_ man 2 getpid
	root      3013  0.0  0.0   5836     0 pts/73   S+    2023   0:00      \_ pager
	root      2979  0.0  0.0   7236     8 pts/72   Ss+   2023   0:00 /bin/bash
	root      2937  0.0  0.0   7236    12 pts/71   Ss+   2023   0:00 /bin/bash
	root      2925  0.0  0.0   7236     4 pts/70   Ss+   2023   0:00 /bin/bash
	root      2907  0.0  0.0   7236    12 pts/69   Ss+   2023   0:00 /bin/bash
	root      2892  0.0  0.0   7236     8 pts/68   Ss+   2023   0:00 /bin/bash
	root      2879  0.0  0.0   7236     0 pts/67   Ss+   2023   0:00 /bin/bash
	root      2839  0.0  0.0   7236    12 pts/66   Ss+   2023   0:00 /bin/bash
	root      2827  0.0  0.0   7236     8 pts/65   Ss+   2023   0:00 /bin/bash
	root      2785  0.0  0.0   7236    12 pts/64   Ss+   2023   0:00 /bin/bash
	root      2773  0.0  0.0   7236     8 pts/63   Ss+   2023   0:00 /bin/bash
	root      2733  0.0  0.0   7236    12 pts/62   Ss+   2023   0:00 /bin/bash
	root      2721  0.0  0.0   7236     0 pts/61   Ss+   2023   0:00 /bin/bash
	root      2682  0.0  0.0   7236    12 pts/60   Ss+   2023   0:00 /bin/bash
	root      2670  0.0  0.0   7236     8 pts/59   Ss+   2023   0:00 /bin/bash
	root      2629  0.0  0.0   7236    12 pts/58   Ss+   2023   0:00 /bin/bash
	root      2617  0.0  0.0   7236     8 pts/57   Ss+   2023   0:00 /bin/bash
	root      2579  0.0  0.0   7236    12 pts/56   Ss+   2023   0:00 /bin/bash
	root      2566  0.0  0.0   7236     8 pts/55   Ss+   2023   0:00 /bin/bash
	root      2517  0.0  0.0   7236    12 pts/54   Ss+   2023   0:00 /bin/bash
	root      2504  0.0  0.0   7236     8 pts/53   Ss+   2023   0:00 /bin/bash
	root      2464  0.0  0.0   7236    12 pts/52   Ss+   2023   0:00 /bin/bash
	root      2423  0.0  0.0   7236    12 pts/51   Ss+   2023   0:00 /bin/bash
	root      2391  0.0  0.0   7236     8 pts/50   Ss+   2023   0:00 /bin/bash
	root      2302  0.0  0.0   7236    12 pts/49   Ss+   2023   0:00 /bin/bash
	root      2189  0.0  0.0   7236    12 pts/48   Ss+   2023   0:00 /bin/bash
	root      2177  0.0  0.0   7236     8 pts/47   Ss+   2023   0:00 /bin/bash
	root      2092  0.0  0.0   7236    12 pts/46   Ss+   2023   0:00 /bin/bash
	root      2017  0.0  0.0   7236    12 pts/45   Ss    2023   0:00 /bin/bash
	root      2091  0.0  0.0  22112    28 pts/45   S+    2023   0:00  \_ vi 1-print_binary.c
	root      1945  0.0  0.0   7236    12 pts/44   Ss    2023   0:00 /bin/bash
	root      2016  0.0  0.0  22140    28 pts/44   S+    2023   0:00  \_ vi 0-binary_to_uint.c
	root      1913  0.0  0.0   7236    12 pts/43   Ss+   2023   0:00 /bin/bash
	root      1875  0.0  0.0   7236    12 pts/42   Ss    2023   0:00 /bin/bash
	root      1912  0.0  0.0  22112    28 pts/42   S+    2023   0:00  \_ vi 0-binary_to_uint.c
	root      1829  0.0  0.0   7236    12 pts/41   Ss+   2023   0:00 /bin/bash
	root      1748  0.0  0.0   7236    12 pts/40   Ss+   2023   0:00 /bin/bash
	root      1730  0.0  0.0   7236    12 pts/39   Ss    2023   0:00 /bin/bash
	root      1747  0.0  0.0  22156    28 pts/39   S+    2023   0:00  \_ vi 3-cp.c
	root      1711  0.0  0.0   7236    12 pts/38   Ss    2023   0:00 /bin/bash
	root      1729  0.0  0.0  22096    28 pts/38   S+    2023   0:00  \_ vi 3-cp.c
	root      1666  0.0  0.0   7236    12 pts/37   Ss+   2023   0:00 /bin/bash
	root      1626  0.0  0.0   7236     8 pts/36   Ss+   2023   0:00 /bin/bash
	root      1613  0.0  0.0   7236     8 pts/35   Ss+   2023   0:00 /bin/bash
	root      1573  0.0  0.0   7236    12 pts/34   Ss+   2023   0:00 /bin/bash
	root      1557  0.0  0.0   7236    12 pts/33   Ss    2023   0:00 /bin/bash
	root      1572  0.0  0.0  22096    28 pts/33   S+    2023   0:00  \_ vi 0-read_textfile.c
	root      1519  0.0  0.0   7236     8 pts/32   Ss+   2023   0:00 /bin/bash
	root      1441  0.0  0.0   7236     8 pts/31   Ss+   2023   0:00 /bin/bash
	root      1324  0.0  0.0   7236     8 pts/30   Ss+   2023   0:00 /bin/bash
	root      1256  0.0  0.0   7236     8 pts/29   Ss+   2023   0:00 /bin/bash
	root      1182  0.0  0.0   7236     8 pts/28   Ss+   2023   0:00 /bin/bash
	root      1165  0.0  0.0   7236     8 pts/27   Ss    2023   0:00 /bin/bash
	root      1181  0.0  0.0  22096    24 pts/27   S+    2023   0:00  \_ vi 100-reverse_listint.c
	root      1119  0.0  0.0   7236     8 pts/26   Ss+   2023   0:00 /bin/bash
	root      1059  0.0  0.0   7236     8 pts/25   Ss+   2023   0:00 /bin/bash
	root       930  0.0  0.0   7236     8 pts/24   Ss+   2023   0:00 /bin/bash
	root       911  0.0  0.0   7236     8 pts/23   Ss    2023   0:00 /bin/bash
	root       929  0.0  0.0  22156    24 pts/23   S+    2023   0:00  \_ vi 6-pop_listint.c
	root       895  0.0  0.0   7236     8 pts/22   Ss    2023   0:00 /bin/bash
	root       910  0.0  0.0  22096    24 pts/22   S+    2023   0:00  \_ vi 6-pop_listint.c
	root       809  0.0  0.0   7236     8 pts/21   Ss+   2023   0:00 /bin/bash
	root       794  0.0  0.0   7236     0 pts/20   Ss+   2023   0:00 /bin/bash
	root       727  0.0  0.0   7236     8 pts/19   Ss+   2023   0:00 /bin/bash
	root       693  0.0  0.0   7236     4 pts/18   Ss+   2023   0:00 /bin/bash
	root       675  0.0  0.0   7236     8 pts/17   Ss    2023   0:00 /bin/bash
	root       692  0.0  0.0  22096    24 pts/17   S+    2023   0:00  \_ vi 3-add_nodeint_end.c
	root       660  0.0  0.0   7236     4 pts/16   Ss+   2023   0:00 /bin/bash
	root       613  0.0  0.0   7236     8 pts/15   Ss+   2023   0:00 /bin/bash
	root       568  0.0  0.0   7236     8 pts/14   Ss+   2023   0:00 /bin/bash
	root       553  0.0  0.0   7236     8 pts/13   Ss+   2023   0:00 /bin/bash
	root       473  0.0  0.0   7236     8 pts/12   Ss+   2023   0:00 /bin/bash
	root       461  0.0  0.0   7236     4 pts/11   Ss+   2023   0:00 /bin/bash
	root       447  0.0  0.0   7236     0 pts/10   Ss+   2023   0:00 /bin/bash
	root       381  0.0  0.0   7236     8 pts/9    Ss+   2023   0:00 /bin/bash
	root       279  0.0  0.0   7236     8 pts/8    Ss    2023   0:00 /bin/bash
	root       380  0.0  0.0  22092    24 pts/8    S+    2023   0:00  \_ vi 100-first.c
	root       258  0.0  0.0   7236     8 pts/7    Ss    2023   0:00 /bin/bash
	root       278  0.0  0.0  22060    24 pts/7    S+    2023   0:00  \_ vi 3-add_node_end.c
	root       211  0.0  0.0   7236     8 pts/6    Ss+   2023   0:00 /bin/bash
	root       160  0.0  0.0   7236     8 pts/5    Ss    2023   0:00 /bin/bash
	root       210  0.0  0.0  22092     0 pts/5    S+    2023   0:00  \_ vi 2-add_node.c
	root       121  0.0  0.0   7236     8 pts/4    Ss+   2023   0:00 /bin/bash
	root       104  0.0  0.0   7236     8 pts/3    Ss    2023   0:00 /bin/bash
	root       120  0.0  0.0  22092    24 pts/3    S+    2023   0:00  \_ vi 0-print_list.c
	root        54  0.0  0.0   7236     8 pts/2    Ss+   2023   0:00 /bin/bash
	root        35  0.0  0.0   7236     8 pts/1    Ss+   2023   0:00 /bin/bash
	root        20  0.0  0.0   7236     4 pts/0    Ss+   2023   0:00 /bin/bash
	root         1  0.0  0.0   6972     0 ?        Ss    2023   0:00 /bin/bash /etc/sandbox_run.sh
	root        15  0.0  0.0  12172    12 ?        S     2023   0:00 sshd: /usr/sbin/sshd -D [listener] 0 of 10-100 startups
	root@e1714dc5a3c9:~/alx-system_engineering-devops/0x05-processes_and_signals# 

	```
	
##### Requirements:

   - Must show all processes, for all users, including those which might not have a TTY
   - Display in a user-oriented format
   - Show process hierarchy

##### Repo:

   - GitHub repository: `alx-system_engineering-devops`
   - Directory: `0x05-processes_and_signals`
   - File: `1-list_your_processes`
