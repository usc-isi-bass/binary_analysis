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

struct stu
{
char data[100];
struct stu *next;
};
void main()
{
struct stu *head;
struct stu *p1,*p2;
p1=(struct stu *)malloc(LEN);
p1->next=NULL;
gets(p1->data);
while(strcmp(p1->data,"end"))
{
 p2=(struct stu *)malloc(LEN);
 p2->next=p1;
 p1=p2;
 gets(p1->data);
}
head=p1->next;
for(p2=head;p2;p2=p2->next)
puts(p2->data);
}