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

struct st
{
    char id[200];
    struct st *pre;
    struct st *next;
} *p1, *p2;
int main(void)
{
    p1 = p2 = (struct st*)malloc(LEN);
    p1->pre = NULL;
    gets(p1->id);

    while(strcmp(p1->id,"end"))
    {
        p2->next=p1;
        p2=p1;
        p1=(struct st*)malloc(LEN);
        gets(p1->id);
        p1->pre=p2;
    }

    while(p2!=NULL)
    {
        printf("%s\n",p2->id);
        p2 = p2->pre;
    }

    return 0;
}
