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
	char a[60],b[60],c[60];
	int i,j,k,m,n;
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			if(a[j]==b[i+j])k++;
		if(k==m)break;
	    k=0;
	
	}
    printf("%d",i);
	





}