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
	int n;
	scanf("%d", &n);
	int i,j,num,p,q;
	for(i=0;i<n;i++)
	{
		char a[101],b[101];
		scanf("%s", &a);
		num=strlen(a);
		for(j=0;j<num;j++)
		{
			if(a[j]=='(')
			{
				b[j]='$';
			}
			else if(a[j]==')')
			{
				b[j]='?';
			}
			else 
			{
				b[j]=' ';
			}
		}
        
        for(p=num-1;p>=0;p--)
		{
			if(b[p]=='$')
			{
			    for(q=p;q<num;q++)
				{
					if(b[q]=='?')
					{
						b[q]=' ';
						b[p]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<num;j++)
		{
			
			printf("%c", a[j]);
		}
		printf("\n");
		for(j=0;j<num;j++)
		{
			
			printf("%c", b[j]);
		}
		printf("\n");
		p=0;
		q=0;
	}
}