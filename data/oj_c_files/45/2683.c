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
	int i,j,l,t;
	char s[50],w[50];
	scanf("%s%s",s,w);
	for(i=0;w[i]!='\0';i++)
	{
		t=0;
		if(w[i]==s[0])
		{
			for(j=1;s[j]!='\0';j++)
			{
				if(s[j]!=w[i+j])
				{
					break;
				}
				else
				{
					t=t+1;
				}
			}
			if(t==j-1)
			{
				printf("%d",i);
				return 0;
			}
		}
	}
	return 0;
}
