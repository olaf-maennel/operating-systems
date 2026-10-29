                     parallel_mergesort
                            |
                            |
                 level       >=     cutoff ?
                                  
                  Yes              No
                   |                |
                   |                |
            my_mergesort         split
                            |             |
                            |             |
                         pthread       pthread
                           |              |
                    parallel_sort   parallel_sort
                           \              /
                            \            /
                           pthread_join
                                |
                              merge




## Project Number/Title 

* Authors: Your Name, and your group members’ names
* Group name: Your Group Name

## Overview

This program sorts an array using parallel merge sort. It uses multiple threads to sort different parts of the array at the same time, then merges the sorted parts together.

## Manifest

- `Makefile` — Compiles the source files and builds the `test-mergesort` executable.
- `mergesort.c` — Contains the implementation of the merge sort and parallel merge sort functions.
- `mergesort.h` — Contains function declarations, the thread argument structure, and shared variable declarations.
- `test-mergesort.c` — Generates test data, runs the sorting program, measures execution time, and checks whether the array is sorted correctly.
- `README` — Contains the project description, build instructions, testing information, known issues, and reflection.

## Building the project

This section should tell the user how to build your code.  If you are
delivering a library, where does it need to be installed, or how do you use
it? Is this an executable, if so, how can a user get up to speed as fast as
possible?

## Implementation Steps

1. Read the starter code and understand the existing functions and variables.

2. Implement `merge()` to combine two sorted subarrays.

3. Implement `my_mergesort()` to perform sequential merge sort using recursion.

4. Test the sequential merge sort to make sure it sorts correctly.

5. Implement `parallel_mergesort()` using `pthread_create()` to create multiple threads.

6. Use `pthread_join()` to wait for threads to finish before merging.

7. Implement the cutoff logic to control how many levels of threads are created.

8. Check `buildArgs()` and make sure thread arguments and memory are handled correctly.

9. Compile the program using `make` and fix any errors.

10. Test the program with different array sizes, cutoff levels, and random seeds.

11. Compare sequential and parallel execution times and calculate the speedup.

12. Optimise the program to achieve at least 2x speedup.

13. Complete the `README.md`, including testing results and reflections.

14. Run the final tests on Gradescope and submit the required files.

## Features and usage

Summarise the main features of your program. It is also appropriate to
instruct the user how to use your program.

## Testing

This section should detail how you tested your code. Simply stating "I ran
it a few times and it seems to work" is not sufficient. Your testing needs
to be detailed here.

## Known Bugs

List known bugs that you weren't able to fix (or ran out of time to fix).

## Reflection and Self Assessment

Discuss the issues you encountered during development and testing. What
problems did you have? What did you have to research and learn on your own?
What kinds of errors did you get? How did you fix them?

What parts of the project did you find challenging? Is there anything that
finally "clicked" for you in the process of working on this project? How well
did the development and testing process go for you?

## Sources Used

If you used any sources outside of the textbook, you should list them here. 
If you looked something up on stackoverflow.com or you use help from AI, and 
fail to cite it in this section, it will be considered plagiarism and dealt 
with accordingly. So be safe CITE!



## Tasks Assignment

### Member 1 – Sequential Merge Sort

- Implement `merge()` and `my_mergesort()`.
- Test sequential merge sort.
- Fix sorting errors and improve the sequential implementation.

### Member 2 – Parallel Merge Sort

- Implement `parallel_mergesort()`.
- Handle thread creation and joining.
- Implement cutoff logic.
- Manage thread arguments and memory.

### Member 3 – Testing and Performance

- Write automated testing and benchmarking scripts.
- Test different array sizes, cutoff levels, and random seeds.
- Compare sequential and parallel execution times.
- Help optimise the implementation to achieve at least 2x speedup.
- Prepare the README.

### All Members

- Review the final implementation.
- Fix integration problems.
- Run final tests and check the Gradescope results.
