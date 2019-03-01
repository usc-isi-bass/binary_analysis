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
	char a[50],b[50];
	int len1,i=0,p=0,j,k=0;
	scanf("%s %s",a,b);
	len1=strlen(a);
do
		if(a[i]==b[p])
		{
			i++;
			p++;
		
		}
		else
			if(a[i]!=b[p])
		{
			k++;
			p=k;
			i=0;
			
		}
			while(i<len1);
	j=k;
	printf("%d",j);
	return 0;
}