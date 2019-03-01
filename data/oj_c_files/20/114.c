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


void charu()
{
	char str[11], substr[4],c,a[11];
	int i=0,k,s;

	scanf("%s %s",str,substr);
	k=strlen(str);
	if(strlen(str)>=11 || strlen(substr)>=4) return; 
	for(i=0;i<k;i++)
	{
		a[i]=str[i];
	}
	for(i=k;i<11;i++)
	    a[i]='\0';
	
	for(i=0;i<k-1;i++) 
	{
		if(a[i]>a[i+1])
		{
			c=a[i];
			a[i]=a[i+1];
			a[i+1]=c;
		}
	}
    for(i=0;i<k;i++) 
	{
		if(str[i]==a[k-1])
		{
			s=i;
		    break;
		}
	}
	for(i=0;i<s+1;i++) 
		printf("%c",str[i]);
	printf("%s",substr);
	for(i=s+1;i<k;i++) 
		printf("%c",str[i]);
	printf("\n");
	charu();
}

void main()
{
	charu();
}