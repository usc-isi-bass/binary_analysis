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

void main()
{
 struct student
{
 char str[100];
 struct student *before;
 struct student *next;
 }*head,*p1,*p2;
 p1=(struct student *)malloc(sizeof(struct student));
 p1->before=NULL;
 head=p1;
 while(strcmp(p2->str,"end")!=0)
 {
  gets(p1->str);
  p2=p1;
  p1=(struct student*)malloc(sizeof(struct student)); 
  p1->before=p2;
  p2->next=p1;
 }
  p2->next=NULL; 
  p2=p2->before;
  do
  {
   printf("%s\n",p2->str);
   p2=p2->before;
  }while(p2->before!=NULL);
  printf("%s\n",p2->str);
}