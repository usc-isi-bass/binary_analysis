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
	char str[100];
	struct student *pre;
} *p1, *p2;

struct student *create(void)
{   
	struct student *last, *head;	
	p1 = p2 = (struct student *)malloc(sizeof(struct student)); //????
	gets(p1->str);//?????
	head=NULL;
	n=0;	
	while (strcmp(p1->str,"end")!=0)
	{	
		    n=n+1;	//??????	
		if (n==1)		
		{   
			head=p1;
			p1->pre = NULL;//??????pre??			
		}		
		else		
		{
			p1->pre = p2;//????pre????????
			
		}
		    p2 = p1;//?????
		    p1 = (struct student *)malloc(sizeof(struct student));//????
			gets(p1->str);	
			
	}
	last=p1->pre=p2;	    
	return (last);
}
void main ()
{    
	 struct student *create();
	 struct student *last, *p;	 
	 last=create();
	 p=last;
    do
	 {
          printf("%s\n", p->str);
            p=p->pre;
	 }	 
	 while (p->pre!=NULL);
	 if(p->pre==NULL)
      printf("%s\n", p->str);

}

