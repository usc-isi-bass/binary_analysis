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
	scanf("%s",s);
	scanf("%s",w);
	
	int a,b,i,j;
	a=strlen(s),b=strlen(w);

	for(j=0;j<b;j++)
	{
		if(s[0]==w[j])
		{
			for(i=0;i<a;i++)
			{
				j++;
				if(s[i+1]!=w[j])
					break;
				else if(i+1==a-1)
				{
					j=j-a+1;
					printf("%d\n",j);
				}
			}
			if(i==a-1)
			break;
		}	
	
	}

	return 0;
}