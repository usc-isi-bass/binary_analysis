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
	char a[300];
	int i, j, count, sum=0;
	gets(a);
	for(i=65; i<=90; i++)
	{
		count=0;
		for(j=0; a[j]!='\0'; j++)
			if((int)a[j]==i)
				count++;
		if(count==0) continue;
		printf("%c=%d\n", i, count);
		sum=sum+count;
	}
	for(i=97; i<=122; i++)
	{
		count=0;
		for(j=0; a[j]!='\0'; j++)
			if((int)a[j]==i)
				count++;
		if(count==0) continue;
		printf("%c=%d\n", i, count);
		sum=sum+count;
	}
	if(sum==0)
		printf("No");
}