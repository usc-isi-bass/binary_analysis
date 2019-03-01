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
	char a[300];
	gets(a);
	int i,num[26]={0},len,k;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			num[a[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(num[i]!=0)
		{
            k=0;
			break;
		}
		else k=1;
	}
	if(k==1)
		printf("No\n");
	else if(k==0)
	{
		for(i=0;i<26;i++)
		{
			if(num[i]==0)
                continue;
			else
                printf("%c=%d\n",'a'+i,num[i]);
		}
	}
}