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

struct Student
{
char id[9];
char name[20];
char gen;
int age;
char grade[10];
char add[20];
struct Student *next;
};
void main()
{
struct Student *head,*p2,*p1,*newstu,*newhead;
int i,n=1;
char e[]={"end"};
p1=p2=head=(struct Student*)malloc(sizeof(struct Student));
scanf("%s %s %c %d %s %s",
	  &p1->id,&p1->name,&p1->gen,&p1->age,&p1->grade,&p1->add);
while(1)
{
p1=(struct Student*)malloc(sizeof(struct Student));
scanf("%s",&p1->id);
if(strcmp(p1->id,e)==0) {p2->next=NULL;break;}
else 
{
scanf(" %s %c %d %s %s",
	  &p1->name,&p1->gen,&p1->age,&p1->grade,&p1->add);
p2->next=p1;
p2=p1;
n++;
}
}
for(i=0;i<n;i++)
{
 p2=p1=head;
 while(p1->next!=NULL)
 {
 p2=p1;
 p1=p1->next;
 }
 if(i==0)
	 newhead=newstu=p1;
 else
	 newstu=newstu->next=p1;
 p2->next=NULL;
}
p1=newhead;
for(i=0;i<n;i++)
{
printf("%s %s %c %d %s %s\n",p1->id,p1->name,p1->gen,p1->age,p1->grade,p1->add);
    p1=p1->next;
}
}