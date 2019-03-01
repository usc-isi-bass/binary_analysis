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
	char a[N],b[N],c[N];
	gets(a);
	gets(b);
	gets(c);
	int i=0;
	while(i<strlen(a))
	{
		if(i==0)
		{
			if(a[i]==b[0])
			{
				int j;
			    for(j=0;j<strlen(b);j++)
				{
					if(a[i+j]!=b[j])
					{
						break;
					}
				}
				if(j==strlen(b))
				{
					printf("%s",c);
					i+=strlen(b);
				}
				else
				{
					printf("%c",a[i]);
					i++;
				}
			}
			else
			{
				printf("%c",a[i]);
					i++;
			}
		}
		else
		{
			if(a[i]==b[0]&&a[i-1]==' ')
			{
				int j;
				for(j=0;j<strlen(b);j++)
				{
					if(a[i+j]!=b[j])
					{
						break;
					}
				}
				if(j==strlen(b))
				{
					printf("%s",c);
					i+=strlen(b);
				}
				else
				{
					printf("%c",a[i]);
					i++;
				}
			}
			else
			{
				printf("%c",a[i]);
				i++;
			}
		}
	}
	return 0;
}