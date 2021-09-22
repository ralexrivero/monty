# monty 0x19. C - Stacks, Queues - LIFO, FIFO
Monty. Realese date September 24, 2021
<!--Share on Twitter -->
[![Twitter](https://img.shields.io/twitter/url?style=social&url=https%3A%2F%2Fgithub.com%2Fralexrivero%2Fmonty)](https://img.shields.io/twitter/url?style=social&url=https%3A%2F%2Fgithub.com%2Fralexrivero%2Fmonty)

## Table of contents
* [Description](#Description)
* [Objetives](#Objetives)
* [Environment](#Environment)
* [Requirements](#Requirements)
* [Commands](#Commands)
* [Installation](#Installation)
* [Compilation](#Compilation)
* [Staff](#Staff)
* [License](#License)

## Description

### The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Objetives

- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

## Environment

<!-- ubuntu -->
<a href="https://ubuntu.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Ubuntu&color=E95420&logo=Ubuntu&logoColor=E95420&labelColor=2F333A" alt="Suite CRM"></a>
OS: Ubuntu 20.04 LTS
<!-- bash -->
<a href="https://www.gnu.org/software/bash/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GNU%20Bash&color=4EAA25&logo=GNU%20Bash&logoColor=4EAA25&labelColor=2F333A" alt="terminal"></a>
<!-- c -->	<a href="https://www.cprogramming.com/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=C%20Language&color=5C6BC0&logo=c&logoColor=A8B9CC&labelColor=2F333A" alt="C Low level programming language"></a>
Language: C
Compiler: gcc 9.3.0
<!-- vim -->
<a href="https://www.vim.org/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Vim&color=019733&logo=Vim&logoColor=019733&labelColor=2F333A" alt="Suite CRM"></a>
Editor: VIM 8.1.2269
<!-- git -->
<a href="https://git-scm.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Git&color=F05032&logo=Git&logoColor=F05032&labelColor=2F333A" alt="git distributed version control system"></a>
Control version: Git
<!-- github -->
<a href="https://github.com" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=GitHub&color=181717&logo=GitHub&logoColor=f2f2f2&labelColor=2F333A" alt="Github"></a>

Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Requirements

- use a maximum of one global variable
- The prototypes of all functions should be included in a header file called monty.h
- Any output must be printed on stdout
- Any error message must be printed on stderr
- Use a set of tests
- Monty byte code files
- Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language.
- There is not more than one instruction per line.
- There can be any number of spaces before or after the opcode and its argument:

```
ralex@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
		   pall    $
push 4$
    push 5    $
      push    6        $
pall$
ralex@ubuntu:~/monty$
```

- Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

```
ralex@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
ralex@ubuntu:~/monty$
```

### The monty program

Usage: monty file
where file is the path to the file containing Monty byte code.

If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE

If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE where <file> is the name of the file

If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE where is the line number where the instruction appears.

Line numbers always start at 1

The monty program runs the bytecodes line by line and stop if either:
it executed properly every line of the file it finds an error in the file an error occured

If can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.

Use only malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)
<!-- github -->
<a href="http://montyscoconut.github.io/#:~:text=The%20Monty%20programming%20language%20Monty%20is%20a%20language,close%20the%20gap%20between%20scripting%20and%20programming%20languages." target="_blank"> The Monty programming language</a>


## Commands
	
### The opcode push pushes an element to the stack.

- Usage: `push <int>` where `<int>` is an integer
- if `<int>` is not an integer or if there is no argument given to push, print the error message `L<line_number>: usage: push integer`, followed by a new line, and exit with the status `EXIT_FAILURE`
	- where is the line number in the file
- Dont deal with overflows.
- Use the atoi function

### The pall opcode

The opcode pall prints all the values on the stack, starting from the top of the stack.
- Usage pall
- Format: see example
- If the stack is empty, don’t print anything

```
ralex@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
ralex@ubuntu:~/monty$
```

- pint - Prints the integer at the top of the stack.
- pop - Removes top element of stack.
- swap - Swaps top two elements of the stack.
- add - Add top two elements of the stack, remove them, and push result onto stack.
- sub - Subtract top two elements of the stack, remove them, and push result onto stack.
- div - Integer divide top two elements of the stack, remove them, and push result onto stack.
- mul - Multiply top two elements of the stack, remove them, and push result onto stack.
- mod - Integer division remainder top two elements, remove them, push result onto stack.
- pchar - Print the ascii character based on top integer in stack.
- pstr - Print the ascii characters related to integers in stack until 0 or >255.
- rotl - Rotate stack. Top element becomes last. Second from top becomes top.
- rotr - Rotate stack. Last element becomes top, Top element becomes second from top.
- stack - Changes mode to first in first out (the default behavior). Front of queue becomes top of stack.
- queue - Changes mode to last in first out. Top of stack becomes front of queue.

## Installation

- Clone this repository: `git clone "https://github.com/ralexrivero/monty.git"`
- Change directories into the repository: `cd monty`
- Compile 
- run the file `./monty`

## Compilation

`gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty`

## Staff
Andres & Ronald

Andres

<a href="https://twitter.com/Potterhead_uy" target="_blank">  <img align="left" alt="Andres Ortiz | Twitter" src="https://img.shields.io/twitter/follow/Potterhead_uy?style=social" /> </a>

<a href="https://www.linkedin.com/in/andres-ortiz-535aa98a/" target="_blank">  <img align="left" alt="Andres Ortiz| LinkedIn" src="https://img.shields.io/badge/LinkedIn-blue?style=social&logo=linkedin" /> </a>

<a href="https://github.com/Aortiz91" target="_blank">  <img align="left" src="https://img.shields.io/github/followers/hippocampus3282?style=social" alt="Andres | Github"> </a>
<br/>

Ronald

<a href="https://twitter.com/ralex_uy" target="_blank">  <img align="left" alt="Ronald Rivero | Twitter" src="https://img.shields.io/twitter/follow/ralex_uy?style=social" /> </a>

<a href="https://www.linkedin.com/in/ronald-rivero/" target="_blank">  <img align="left" alt="Ronald Rivero | LinkedIn" src="https://img.shields.io/badge/LinkedIn-blue?style=social&logo=linkedin" /> </a>

<a href="https://github.com/ralexrivero/" target="_blank">  <img align="left" src="https://img.shields.io/github/followers/ralexrivero?style=social" alt="Ralex | Github"> </a>

<br/>

## license
<a href="LICENSE" target="_blank">  <img align="left" src="https://img.shields.io/github/license/ralexrivero/monty" alt="License | Apache"> </a>
