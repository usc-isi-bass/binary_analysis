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
	char a[300];
	int b[26][1]={0},i,n,k=97,m=0,j;
    gets(a);
	n=strlen(a);
    for(i=0;i<=25;i++)
	{
       for(j=0;j<=n-1;j++)
		   if(a[j]==k)
             b[i][0]=b[i][0]+1;
	   k++;
	}
	for(i=0;i<=25;i++)
		if(b[i][0]==0)
			m++;
	if(m==26)
		printf("No");
    for(i=0;i<=25;i++)
        if(b[i][0]!=0)
			printf("%c=%d\n",i+97,b[i][0]);
}