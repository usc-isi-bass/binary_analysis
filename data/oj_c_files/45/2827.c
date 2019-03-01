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
	int i,j=0,la,lb,p;
	scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<lb;i++)
	{
		if(a[j]==b[i])
		{
			if(j==la-1)  break;
			j++;
		}
		else
		{
			j=0;
		}
	}
	p=i-la+1;
	printf("%d", p);
}