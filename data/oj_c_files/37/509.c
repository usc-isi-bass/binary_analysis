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
	char a[100000];
	int t,i,b[26],len,flag=0;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<26;i++)
		{
			b[i]=0;
		}
		scanf("%s",a);
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			b[a[i]-'a']++;
		}
		for(i=0;i<len;i++)
		{
			if(b[a[i]-'a']==1)
			{
				flag=1;
				printf("%c\n",a[i]);
				break;
			}
		}
		if(flag==0)
		{
			printf("no\n");
		}
		flag=0;
	}
}