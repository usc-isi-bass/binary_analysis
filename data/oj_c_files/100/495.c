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
	char c1[300],c2[300];
	int s[300]={0},i,j,m,n;
    gets(c1);
	strcpy(c2,c1);
	n=strlen(c1);
	for(i=0;i<n;i++)
		if(c1[i]>=97&&c1[i]<=122)break;
		if(i==n)printf("No");
	for(i=0,m=0;i<n;i++,m++)
	{
		if(c1[i]>=97&&c1[i]<=122)
        {
			for(j=i+1,s[m]=1;j<n;j++)
			{
				if(c1[j]==c1[i]){s[m]++;c1[j]=32;}
			}
		}
		else continue;
	}
	for(m=97;m<=122;m++)
	{
		for(i=0;i<n;i++)
		{
			if(c1[i]==m)printf("%c=%d\n",c1[i],s[i]);
			else continue;
		}
	}
}
    
