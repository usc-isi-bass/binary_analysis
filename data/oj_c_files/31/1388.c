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


int n;
struct student
{
char s[100];
struct student *next;
};

void main()
{
struct student *head, *p1, *p2; n=0;
p1=p2=( struct student*) malloc(LEN);
gets(p1->s);
head=NULL;

while(p1->s[0]!='e')
{
n=n+1;
if(n==1) p1->next=NULL;
else p1->next=p2;
p2=p1;
p1=(struct student*)malloc(LEN);
gets(p1->s);
}
head=p2;




p1=head;
while(p1!=NULL)
{ 
printf("%s\n",p1->s);
p1=p1->next;
}




}