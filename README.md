

# ArrayList Implementation (vector)

## Assignment Description

It’s time for the long awaited family vacation to Cairo, but things are not going as planned. A series of bizarre occurrences have turned what should have been an easy flight into quite the adventure.

![](travel-plans.jpg)
Between all of the cancellations, delays, and detours, managing your travel plan is becoming tedious. It’d be nice to have a list of stops to keep things organized, something that can grow, shrink, and re-arrange on-demand. 

Your task will be to replicate the functionality of a std::vector as closely as possible in your own class (MyVector).

The class you’ll be building along with function definitions can be found in MyVector.h, read this file carefully as the operations may not be exactly the same as those discussed in class. (**DO NOT MODIFY THIS FILE**) You can also refer to [cppreference](https://en.cppreference.com/w/cpp/container/vector) for more info on the operations.

Place your code for each of the required functions in MyVector.hpp, as always it is recommended that you follow the unit tests as a guide and code each function one-by-one after passing each test.

**Important Note:**
To bring this implementation more in line with std::vector and prepare you for working with the standard library implementations directly, some functions have shifted to use an **ArrayListIterator** in place of a normal _integer_ index. 

The **ArrayListIterator** class provided is designed to act exactly like a normal integer.
* It can be used wherever your code expects an integer **(operator int() implicit conversion)**
* It can be incremented / summed with other integers **(operator+)**
* It can be compared to other integers **(operator> / operator<)**

## Input

No input specification for this assignment. You can focus on writing your operations and nailing down those unit tests!


---


# General information regarding this repository

## Coding
Tips for coding.

### What to name my files?
We give you empty files corresponding to those you should complete!

### Where to code?
We assume you're on a Linux machine, and can install all the software needed by this auto-grader.
See the syllabus for more details.

### How to get this code?
Find the blue button that says "clone", on the home page of this repository.
If you have an ssh key set up:
 `git clone git@... `
If you don't have an ssh set up, or know what that is:
 `git clone https://.. `

### Where to read this file?
This file is nicely displayed in the Gitlab web interface, but you can read it wherever.

### What to install?
See the script's warnings.

### How to code?
Using this script, we strongly encourage you to program incrementally. 
Program code required by the unit tests, in the requested order. 
In general, don't proceed to a later function if you are not passing the first one.
If you get stuck, instead of moving on, get help!
See the syllabus for extended coding tips.

## Auto-grader

### How to run the auto-grader on your machine?
Run the following in the root directory of your repository:
 `./grade.sh `

## How to run the auto-grader on Gitlab-CI?
Make sure all your files are added, committed, and pushed to the appropriate branch (see Git section below).
Navigate to the Gitlab web interface to confirm these changes exist on the server.

## How to make sure I'm getting points?
 * Click on CI/CD -> Jobs -> the latest job.
 * Is it passing, green, etc? 
 * What grade does it say you have?
 * Whatever grade the latest job says, is what we think you have!

## std-io tests: differences between your std-out and the desired std-out
See:  `your _diffs/ ` and  `your _outputs ` to determine what went wrong. 
We run these diffs automatically, so you may not need to manually inspect these files.

## Unit tests: we're micromanaging your functions!
See the unit tests themselves, and run them in your favorite debugger:
 `unit _tests/ `

## Git
Git happens...

### add, commit, push
From within your git repository (folder), add, commit, and push all the non-generated files. 
This means add your cpp and png files, but not a.out, etc.
Verify you can see the files on git-classes in the web interface.
If you can see the correct files on git-classes in your master branch, your submission is complete.
Make sure all the requested files are in the root directory of the repository unless otherwise specified.

## Errors
You should not change any of the grading files themselves. 
If you do, you will see a warning, and it will give you a 0.
If you accidentally did that:
`git checkout firstfourcharactersoflastcommitbyus graderfileyoubroke`

### Is the auto-grader broken?
Is the error you're encountering our fault or yours?
Either may be possible, while the latter is a bit more likely.
Double-check all the diffs, and step through all code to see.
If you think you found a bug, please let us know!

## When is this due?
See the syllabus!

## grade.sh: this automated grading framework
For more details on the generalized auto-grader, see:
https://gitlab.com/classroomcode/grade-sh/grade-sh

