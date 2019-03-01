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
	char s[14],a[4],max=0;
	int n,i,k,j;
	while(scanf("%s %s",s,a)!=EOF)
	{
		k-0;j=0;max=0;
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>max) {k=i;max=s[i];}
	}
	
	for(i=n-1;i>k;i--)
	{
		s[i+3]=s[i];
	}


	while(j<=2)
	{
		s[k+j+1]=a[j];
		j++;
	}
	s[n+3]='\0';
	puts(s);
	}

}



