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

int main()
{
	char s[100][20],*p,*pp,*pr,temp[3];
	int i,k,m,j;
	i=0;
	while(gets(s[i])!=NULL)
	{
	i++;
	}
	k=i;
	for(j=0;j<=k-1;j++)
	{
		p=s[j];
		for(i=0,m=*p,pp=p;i<=100;i++)
		{
			if(*(p+i)>m)
			{
			pp=p+i;
			m=*pp;
			}
			else if(*(p+i)==' ')
			{pr=p+i;
			break;}
		}
        temp[0]=*(pr+1);
		temp[1]=*(pr+2);
		temp[2]=*(pr+3);
		for(i=1;i<=pr-pp-1;i++)
		{*(pr-i+3)=*(pr-i);}
        *(pp+1)=temp[0];
		*(pp+2)=temp[1];
		*(pp+3)=temp[2];
		*(p+strlen(s[j])-1)='\0';
		puts(s[j]);
	}
		
}
