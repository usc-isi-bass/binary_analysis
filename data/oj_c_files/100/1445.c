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
	int count[128]={0},i,c,b=0;
	c=getchar();
	while(c!='\n')
	{
		count[c]++;
		c=getchar();
	}
	for(i='A';i<='Z';i++)
	if(count[i])
	{
		printf("%c=%d\n",i,count[i]);
		b=1;
	}
	for(i='a';i<='z';i++)
	if(count[i])
	{
		printf("%c=%d\n",i,count[i]);
		b=1;
	}
	if(!b) printf("No");
}