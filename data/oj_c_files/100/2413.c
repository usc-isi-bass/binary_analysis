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
	char a[300];
	int b[128]={0},i,j,k,l=0;
	scanf("%s",a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		j=a[i];
		if((j>64&&j<91)||(j>96&&j<123)) b[j]++;
	}
	for(j=65;j<91;j++)
	{
		if(b[j]>0) 
		{
			if(l==0) printf("%c=%d",j,b[j]);
			else printf("\n%c=%d",j,b[j]);
			l++;
		}
	}
	for(j=97;j<123;j++)
	{
		if(b[j]>0) 
		{
			if(l==0) printf("%c=%d",j,b[j]);
			else printf("\n%c=%d",j,b[j]);
			l++;
		}
	}
	if(l==0) printf("No");
	return 0;
}