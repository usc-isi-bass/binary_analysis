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
	int n,m,i,j,d=0;
	char a[50],b[50];
	scanf("%s %s",a,b);
	n=strlen(b);
	m=strlen(a);
	for(i=0;i<=(n-m);i++)
		if(a[0]==b[i])
			{
				for(j=0;j<=m-1;j++)
					if(a[j]==b[i+j])
						d++;
					else break;
					if(d==m)printf("%d",i);
			}
		
	return 0;
}