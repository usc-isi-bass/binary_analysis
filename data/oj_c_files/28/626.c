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
	int word,a[300],i,j,k;
	char str[3000];
	gets(str);
	k=strlen(str);
	j=0;
	word=0;
	for(i=0;i<300;i++)
		a[i]=0;
	for(i=0;i<k;i++)
	{
		if(str[i]!=' ')
		{
			if (word==0)
				word=1;
			a[j]++;
		}
		else
		{
			if(word!=0)
				j++;
			word=0;
		}
	}
	for(i=0;i<j;i++)
		printf("%d,",a[i]);
	printf("%d",a[i]);
}