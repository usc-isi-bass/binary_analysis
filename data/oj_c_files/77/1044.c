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
	char a[101],boy,girl;
	int i,k,len;
	
	scanf("%s",a);
	boy=a[0];
	len=strlen(a);
	for(i=0;i<len;i++)
	{\
		if(a[i]!=boy)
		{
			girl=a[i];
			break;
		}
	}

	for(i=0;i<len;i++)
	{
		if(a[i]==girl)
		{
			for(k=i-1;k>=0;k--)
			{
				if(a[k]==' ')
					continue;
				else if(a[k]==boy)
				{
					a[i]=' ';
				    a[k]=' ';
				    printf("%d %d\n",k,i);
					break;
				}
			}
		}
	}
	return;
}



