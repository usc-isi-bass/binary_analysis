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
	int i,j,m=0,n=0,p=0;
	char a[100],b[100][100];
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
        if(a[i]!=' ')m++;
		if(a[i]==' '||i==strlen(a)-1)
		{
			for(j=0;j<m;j++)
			b[n][j]=a[j+p];
			m=0;
			p=i+1;
			n++;
		}
	}
	printf("%s",b[n-1]);
	for(i=n-2;i>=0;i--)
		printf(" %s",b[i]);
}


	
