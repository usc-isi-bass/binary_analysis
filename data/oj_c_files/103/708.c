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
	char str[1000];
	int i,n,s,count;
	char k;
	scanf("%s",str);
	n=strlen(str);
	if(str[0]<97)
	k=str[0];
	else
		k=str[0]-32;
	count=1;
	for(i=1;i<n;i++)
	{
		if(str[i]==k||str[i]-32==k)
		{
			count=count+1;
		}
		else
		{
			printf("(%c,%d)",k,count);
			if(str[i]<97)
	        k=str[i];
	        else
		    k=str[i]-32;
			count=1;}
		
	}
		printf("(%c,%d)",k,count);
	return 0;
}
