*This project has been created as part of the 42 curriculum by jalamarn*

# Push_swap

## Description

Push_swap is a sorting algorithm project where the goal is to write a C program that sorts a list of integers in ascending order using two stacks and a restricted set of operations. The program must achieve the sorting with the **smallest** possible number of moves.

The numbers are initially stored in stack T, while stack B is used as a helper during the process. With only specific stack operations are allowed:

sa, sb, ss – swap the first two elements

pa, pb – push the top element between stacks

ra, rb, rr – rotate (shift up)

rra, rrb, rrr – reverse rotate (shift down)

Small input sizes (≤ 5 numbers) are handled with hard-coded optimal solutions.
Larger inputs are sorted using the radix strategy.

## Instructions
### Compilation
To compile the program, use the provided Makefile. 
Simply run:
`make`
This will generate the executable push_swap in the current directory.

### Installation
Installing the linux checker is very helpful in determining whether the code I wrote sorts the lists correctly. To do this, install it from the intra website, where it's found next to the subject, and put it in your project folder. Use it in the following manner:
Example: 
`./push_swap 1 3 2 | ./checker_linux 1 3 2`
If it gives you `OK` as a response then your code sorts this list correctly, otherwise it will return `KO`.

### Execution
To run the program, provide a list of integers as arguments. 
Example:
`./push_swap 3 2 5 1 4`
The program will output the minimum number of operations that sorts the integers in ascending order.

## Resources
I used AI tools to help me better understand certain terms, concepts, and small details. AI was used as a learning aid to clarify ideas and ensure I had a proper understanding while implementing the project. In terms of other learning resources, I also used youtube to learn about structs since this is the first time I implement them in a project, along with my peers who have already completed this project. Learning from their experiences was invaluable.