#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student
{
    char str[50];
    struct student *next;
};
int n;
struct student *creat()
{
    struct student *head, *temp, *end;
    head = end = temp = (struct student*) malloc(LEN);
    gets(temp->str);
    while (temp->str[0] != 'e')
    {
        temp->next = head;
        head = temp;
        temp = (struct student*) malloc(LEN);
        gets(temp->str);
    }
    end->next = NULL;
    return (head);
}
void print(struct student *head)
{
    struct student *p;
    p = head;
    while (p != NULL)
    {
        puts(p->str);
        p = p->next;
    }
}
void main()
{
    struct student *head;
    head = creat();
    print(head);
}