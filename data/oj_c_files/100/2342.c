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
	char str[300];int a[52]={0};int len,i,flag=0;char c='A',d='a';
	scanf("%s",str);
	len=strlen(str);
	//printf("%d",len);
	for(i=0;i<len;i++)
	{
		if(str[i]>64&&str[i]<91)
		{
			a[str[i]-65]++;//printf("a");
		}
		if(str[i]>96&&str[i]<123)
		{
			a[26+str[i]-97]++;
		}
	}
	for(i=0;i<52;i++)
	{
		if(i<26)
		{
			if(a[i]!=0)
			{
				c=c+i;//printf("%c %d",c,a[i]);
				//printf("a");
				printf("%c=%d\n",c,a[i]);flag=1;c='A';
			}
		}
		else
		{
			if(a[i]!=0)
			{
				d=d+i-26;
				printf("%c=%d\n",d,a[i]);flag=1;d='a';
			}
		}
	}
	if(flag==0)
		printf("No\n");
}
