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

int main(int argc, char* argv[])
{
    int la,lb,i,j,count=0;
	char a[100],b[100];
	scanf("%s %s",a,b);
    la=strlen(a);
	lb=strlen(b);
	if(la!=lb)
	{
		printf("NO");
	}
	else
	{
	    for(i=0;i<la;i++)
		{
		    for(j=0;j<lb;j++)
			{
				if(a[i]==b[j])
				{
					
					b[j]=j;
					count++;
					break;
				}
			}
		}
		if(count==la)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}


	return 0;
}