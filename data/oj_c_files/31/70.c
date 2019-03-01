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
char info[100];
struct student *next;
struct student *former;};
int i,j,k,n;
void main()
{
struct student *head;
struct student *p1,*p2;
n=0;
p1=p2=(struct student *)malloc(len);
gets(p1->info);
head=0;
while(strcmp(p1->info,"end")!=0)
{
n=n+1;
if(n==1) {head=p1;
p1->former=0;}         
else {p2->next=p1;
p1->former=p2;}
p2=p1;
p1=(struct student *)malloc(len);
gets(p1->info);  
}
p2->next=0;
p1=p2;

do{
puts(p2->info);
printf("\n");
p2=p2->former;}
while(p2!=0);
}