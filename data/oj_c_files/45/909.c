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
	char a[100],b[100];
	int i,p,q,m,j,k;
	scanf("%s" "%s",&a,&b);
	p=strlen(b);q=strlen(a);
	for(i=0;i<=p-1;i++)
	{
		if(b[i]==a[0])
			for(j=i+1,k=1;k<=q-1;j++,k++)
			{
				if(b[j]!=a[k]) break;
			}
			if(k==q)
			{
				printf("%d",i);break;
			}
	}
}