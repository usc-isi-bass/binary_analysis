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
	char a[80],b[80];
	gets(a);
	gets(b);
	int i,n;
	for(i=0;a[i]!='\0';i++)
		if(a[i]>='A'&&a[i]<='Z')
			a[i]+=32;
	for(i=0;b[i]!='\0';i++)
		if(b[i]>='A'&&b[i]<='Z')
			b[i]+=32;
	if(strlen(a)>strlen(b)) n=strlen(a);
	else n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
			if(i==n-1)
				printf("=\n");
		if(a[i]>b[i])
		{printf(">\n");break;}
		if(a[i]<b[i])
		{printf("<\n");break;}
	}
	return 0;
}
	

