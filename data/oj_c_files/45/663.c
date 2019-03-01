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
	char a[50],b[50];
	int i=0,j=0;
	scanf("%s%s",&a,&b);
	while(b[j]!='\0')
	{	
		if(a[0]==b[j])
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]!=b[i+j])
					break;
			}
			if(a[i]=='\0')
			{
				printf("%d\n",j);
				break;
			}
			else    j++;
		}
		else j++;
	}
}
	