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

main()
{
	char a[50],b[50],c[50]={'\0'};
	scanf("%s %s",a,b);
	int la=strlen(a),lb=strlen(b);
	int i,j;
	for (i=0;i<lb;i++)
	{
		for(j=i;j<i+la;j++)
			c[j-i]=b[j];
		if(strcmp(a,c)==0) 
		{
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}