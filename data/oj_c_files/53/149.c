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

int main ()
{   
	int judge=0,b[300],*c[300],num,i,k,j;scanf("%d",&num);
    for(i=0;i<num;i++)        {*(c+i)=&b[i];}
	
	for(i=0;i<num;i++)
	   scanf("%d",*(c+i));
	for(i=0;i<num;i++)
	{   
        if(*(c+i)==NULL)   continue;
		k=**(c+i);
		for(j=i+1;j<num;j++)
		{if(*(c+j)==NULL)   continue;
		if(**(c+j)==k)  *(c+j)=NULL;}
	}
	for(i=0;i<num;i++)
	{
		if(*(c+i)==NULL)   continue;
        printf("%d",**(c+i));
		break;
	}
	for(i++;i<num;i++)
	{
		if(*(c+i)==NULL)   continue;
        printf(",%d",**(c+i));
	}

			
			
	return 0;
}
 