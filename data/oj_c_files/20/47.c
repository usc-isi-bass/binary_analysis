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
	char str[100][40],su[4],s[10],max;
	int m,length[100],i=0,j,l,p;
	do
	{
		gets(str[i]);
		i++;
		m=strlen(str[i-1]);
	}
	while(m!=0);
	l=i-1;
	for(i=0;i<l;i++)
	{
		length[i]=strlen(str[i]);
		max=str[i][0];
		for(j=1;j<length[i]-4;j++)
		{
			if(str[i][j]>max)
			{
				max=str[i][j];
				p=j;
			}
		}
		for(j=0;j<3;j++)
		   su[j]=str[i][length[i]+j-3];
		for(j=0;j<length[i]-p-5;j++)
			s[j]=str[i][p+j+1];
		for(j=0;j<=p;j++)
			str[i][j]=str[i][j];
		for(j=p+1;j<=p+3;j++)
			str[i][j]=su[j-p-1];
		for(j=p+4;j<length[i];j++)
			str[i][j]=s[j-p-4];
		for(j=length[i]-1;j<40;j++)
			str[i][j]='\0';
		printf("%s\n",str[i]);
	}
}
	
		
