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
	char str[300];
	int i,j,len,s=0;
	gets(str);
	len=strlen(str);
	int count[200];



	for(i=65;i<=90;i++)
	{
	    count[i]=0;//
		for(j=0;j<len;j++)
		{
			if(str[j]==i)count[i]+=1;
		}
		if(count[i]!=0)
		{
	    	printf("%c=%d\n",i,count[i]);
		}
	}

	for(i=97;i<=122;i++)
	{
	    count[i]=0;//
		for(j=0;j<len;j++)
		{
			if(str[j]==i)count[i]+=1;
		}
		if(count[i]!=0)
		{
	    	printf("%c=%d\n",i,count[i]);
		}
	}
	
	for(i=65;i<=90;i++)
	{
		s+=count[i];
	}
	for(i=97;i<=122;i++)
	{
		s+=count[i];
	}

	if(s==0)printf("No");
}



