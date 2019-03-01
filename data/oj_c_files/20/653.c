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
	char str[100],substr[100],max,a[100],b[100];
	int i,j,k,m,n,t;
	
	while(scanf("%s %s",str,substr)!=EOF)
	{
	
	m=strlen(str);
	max=str[0];
	for(i=0;i<m;i++)
		if(str[i]>max)
		{
			max=str[i];
			t=i;
		}
		strcpy(b,str);
		b[t+1]='\0';
		strcpy(a,b);
		strcat(a,substr);
		n=strlen(a);
		for(i=1;i<m-t;i++)
			a[n+i-1]=str[t+i];
		a[n+i-1]='\0';
		

		printf("%s\n",a);
	}
	




}
