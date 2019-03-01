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
	int i, k;
	char a[14],b[4];
         while (scanf("%s%s",a,b)!=EOF)
	{
				k=0;
		for(i=0;a[i]!='\0';i++)
		   if(a[k]<a[i])
			   k=i;
		for(i=12;i>k+3;i--)
			a[i]=a[i-3];
		for(i=k+1;i<k+4;i++)
			a[i]=b[i-k-1];
		printf("%s\n",a);
	}
}
