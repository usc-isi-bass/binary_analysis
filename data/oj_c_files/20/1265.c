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

int locate(char s[])
{
	int i,max_loc=0,len;
	len=strlen(s);
	for(i=1;i<len;i++)
	{
		if(s[i]>s[max_loc])
			max_loc=i;
	}
	return max_loc;
}
void main()
{
	char a[100][21],b[100][30],max[100],len[100];
	int i=-1,j,m;
    do
	{
		i++;
	}
	while(scanf("%s%s",a[i],b[i])!=EOF);
   
	for(j=0;j<i;j++)
	{
		max[j]=locate(a[j]);
		len[j]=strlen(b[j]);
		m=max[j]+1;
		while(a[j][m]!='\0')
		{
			b[j][len[j]++]=a[j][m++];
		}
		b[j][len[j]]='\0';a[j][max[j]+1]='\0';
		printf("%s\n",strcat(a[j],b[j]));
	}
}