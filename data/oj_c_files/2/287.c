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

main()
{
	int n;
	scanf("%d",&n);
	struct 
	{
		int num;
		char a[25];
	}book [999];
	int i,j;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d %s",&book[i].num,book[i].a);
	}
	int s[26]={0};
	for(i=0;i<=n-1;i++)
	{
		int len=strlen(book[i].a);
		for(j=0;j<len;j++)
		{
			s[book[i].a[j]-'A']++;
		}
	}
	int max=0;
	char name;
	for(i=0;i<=25;i++)
	{
		if(s[i]>max)
		{
			max=s[i];
			name='A'+i;
		}
	}
	printf("%c\n",name);
	printf("%d\n",max);
	for(i=0;i<=n-1;i++)
	{
		int len=strlen(book[i].a);
		for(j=0;j<len;j++)
		{
			if(book[i].a[j]==name)
				printf("%d\n",book[i].num);
		}
	}




		
	
}
