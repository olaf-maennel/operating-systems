
#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

/* Required global variables, normally defined in test-mergesort.c */
int *A;
int *B;
int cutoff = 0;

/* Run one test case and compare every element with the expected output. */
void run_test(const char *name, int input[], int expected[], int n)
{
    int i;
    int passed = 1;

    A = malloc(n * sizeof(int));
    B = malloc(n * sizeof(int));

    if (A == NULL || B == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(A);
        free(B);
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < n; i++) {
        A[i] = input[i];
    }

    my_mergesort(0, n - 1);

    for (i = 0; i < n; i++) {
        if (A[i] != expected[i]) {
            passed = 0;
            break;
        }
    }

    printf("[%s] %s\n", passed ? "PASS" : "FAIL", name);

    free(A);
    free(B);

    if (!passed) {
        exit(EXIT_FAILURE);
    }
}

int main(void)
{
    int a1[] = {2, 1};
    int e1[] = {1, 2};

    int a2[] = {1, 2, 3, 4, 5};
    int e2[] = {1, 2, 3, 4, 5};

    int a3[] = {5, 4, 3, 2, 1};
    int e3[] = {1, 2, 3, 4, 5};

    int a4[] = {3, 1, 3, 2, 1};
    int e4[] = {1, 1, 2, 3, 3};

    int a5[] = {7, 7, 7, 7};
    int e5[] = {7, 7, 7, 7};

    int a6[] = {-3, 5, -1, 0, 2};
    int e6[] = {-3, -1, 0, 2, 5};

    int a7[] = {42};
    int e7[] = {42};

    run_test("Two elements", a1, e1, 2);
    run_test("Already sorted", a2, e2, 5);
    run_test("Reverse sorted", a3, e3, 5);
    run_test("Duplicates", a4, e4, 5);
    run_test("All identical", a5, e5, 4);
    run_test("Negative numbers", a6, e6, 5);
    run_test("Single element", a7, e7, 1);

    printf("All sequential merge sort tests passed!\n");
    return 0;
}
