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
	char a[50],b[50];
	int na,nb,i=0,j,c;
	scanf("%s %s",a,b);
	na=strlen(a);
	nb=strlen(b);

	for(i=0;i<=nb-na;i++)
		if(a[0]==b[i])
		{	c=0;
			for(j=0;j<na;j++)
				if(a[j]==b[j+i])
				   c++;
			if(c==na)
				printf("%d",i);break;
		}

}
