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
	int i,j,k,n,flag,m;
	flag=0;
	char str[500];
	gets(str);
	n=strlen(str);
	char *p;
	for(i=2;i<=n;i++)
	{
			p=str;
			for(j=0;j<=n-i;j++)
			{
				for(k=j;k<(j+j+i)/2;k++)
				{
					if(str[k]==str[j+j+i-1-k])
						flag=1;
					else
					{
						flag=0;
						break;
					}
				}
				if(flag==1)
				{
					for(m=j;m<=j+i-1;m++)
					{
						printf("%c",str[m]);
					}
					printf("\n");
				}
			}
	}
}



	