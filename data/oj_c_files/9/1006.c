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

struct xinxi
{
	char  id[10];
	int age;
};

struct xinxi old[100];
void main()
{
	int i,n,j;
    int maxage=0;
	scanf("%d",&n);
   
	for(i=0;i<n;i++)   /*???????id???????????????????'\0'????????????????????????????????id,????????????'\0'????????????*/
	{
	scanf("%s %d",old[i].id,&old[i].age);
	
	}
    
	for(i=0;i<n;i++)
		if(maxage<old[i].age)maxage=old[i].age;
	
   
	for(j=maxage;j>=60;j--)
        for(i=0;i<n;i++)
            if(old[i].age==j)puts(old[i].id);
	for(i=0;i<n;i++)
		if(old[i].age<60)puts(old[i].id);
}
