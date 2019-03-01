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

struct person
{char ID[10];
 int age;
}person[100];
void main()
{
	int i,j=-1,k,n,max;
	char s[100][10],a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",&person[i].ID,&person[i].age);
	for(i=0;i<n;i++)
	{a[i]=person[i].age;
	  if(person[i].age>=60) j++;}
	for(k=0;k<=j;k++)
	{
  	 max=0;
	 for(i=0;i<n;i++)
 	   max=(max>=a[i])?max:a[i];
	 for(i=0;i<n;i++)
	    if(a[i]==max) 
		{printf("%s\n",person[i].ID);
	     a[i]=0;
  	     break;
		}
	}
	for(i=0;i<n;i++)
	if(person[i].age<60) printf("%s\n",person[i].ID);
}