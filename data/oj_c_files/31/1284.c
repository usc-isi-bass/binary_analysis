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
  char name[50];
  struct student *next;
  struct student *former;
};//????????

void main()
{
  struct student *head1,*head2;
  struct student *p1,*p2;
  
    

  p1=p2=(struct student*)malloc(LEN);
  gets(p1->name);
  p1->next=NULL;  //???p1->next???
  p1->former=NULL;
  head1=p1;
  
  while(strcmp(p1->name,"end"))
  {
   	p2=p1;
	p1=(struct student*)malloc(LEN);
    gets(p1->name);
	
	p1->next=NULL;
	p1->former=p2;
	p2->next=p1;
  }
  p2->next=NULL;

  do
  {
    puts(p2->name);
	p2=p2->former;
  }
  while(p2!=NULL);

}