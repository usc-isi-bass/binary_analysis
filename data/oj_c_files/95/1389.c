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
	int i,n;
	char c1[100]={0},c2[100]={0},c;
	gets(c1);

	gets(c2);
	
    for(i=0;i<100;i++)
	{
		if((c1[i]>=65)&&(c1[i]<=90)) c1[i]=c1[i]+32;
		if((c2[i]>=65)&&(c2[i]<=90)) c2[i]=c2[i]+32;
	}
	if(strcmp(c1,c2)>0) 
	{
		printf(">");
	}
	else if(strcmp(c1,c2)==0)
	{
		printf("=");
	}
	else printf("<");
	return 0;
}