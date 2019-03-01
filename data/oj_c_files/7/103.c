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
	char s[256],a[256],b[256];
	int l1,i,j,n;
	int flag;
	scanf("%s",s);
	scanf("%s",a);
	scanf("%s",b);
	l1=strlen(a);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==a[0])
		{
			flag=1;
			for(j=i+1;j<(i+l1);j++)
			{
				if (s[j]!=a[j-i])
					flag=0;
				else 
				    flag=1;
			}
			if(flag==1)
			{
				for(n=0;n<i;n++)
					printf("%c",s[n]);
				printf("%s",b);
				for(n=i+l1;s[n]!='\0';n++)
					printf("%c",s[n]);
				return 0;
			}
		}
	}
	printf("%s",s);
	return 0;
}
