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
	char s[50],w[50];
	scanf("%s%s",s,w);
	int i,j=0,count=-1,l,m;
	l=strlen(w);
	m=strlen(s);
	for(i=count+1;i<l;i++)
	{
		if(w[i]==s[0])
		{
			count=i;
			while(w[i]==s[j]&&w[i]!='\0')
			{
				j++;
				i++;
			
			}
			if(j==m)
			{
				break;
			}
		}
	}
	if(j==m)
	{
		printf("%d",count);
	}
	else printf("error");




	return 0;
}

