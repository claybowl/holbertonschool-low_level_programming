#ifndef LISTS_H
#define LISTS_H

/* includes */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* structures */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* prototypes */

int _putchar(char c);

#endif
