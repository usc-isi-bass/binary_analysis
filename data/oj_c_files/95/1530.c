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


char trans(char k)
{
	if((k>='a')&&(k<='z'))
		return(k+'A'-'a');
	else return(k);
}

main()
{
	char a[100],b[100];
	int i,l1,l2,n=0;

	gets(a);
	gets(b);
	l1=strlen(a);l2=strlen(b);

	for(i=0;(i<l1)&&(i<l2);i++){
		a[i]=trans(a[i]);
		b[i]=trans(b[i]);
		if(a[i]!=b[i])
		{
				if(a[i]>b[i]) printf(">");
				else printf("<");
				n++;
				break;
		}
	}

	if(n==0)
		printf("=");
}