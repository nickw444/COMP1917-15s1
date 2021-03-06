/*
    This program is meant to find the largest number in a linked list

    You cannot use any other libraries.
    Compile using: gcc -Wall -Werror -O -o q1 q1.c
    Mark using: ./q1
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_SIZE 100


typedef struct _node {
    int value;
    struct _node * next;
} node;

int largestNode(node * head) {
    // Fix this function!
    // You can assume you will always be given at least 1 node.
    return 0;
}

int main(int argc, char *argv[]) {
    // Main function is fine.
    // Don't change this.

    char buffer[100];
    int i = 0;
    char in = getchar();

    node * head = NULL;

    while (in != EOF) {
        if (in == '\n') {
            buffer[i] = 0;
            i = 0;

            int val = atoi(buffer);
            // Insert into the front of the linked list
            node * oldHead = head;
            head = malloc(sizeof(node));
            assert(head != NULL);
            head->value = val;
            head->next = oldHead;
        }
        else {
            buffer[i] = in;
            i++;
        }
        in = getchar();
    }

    int largest = largestNode(head);
    printf("Largest: %d\n", largest);

    return EXIT_SUCCESS;
}


