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
    int s[11],t[11];
	int m,n,j,k,i,l,a,b,sign=0;
	scanf("%d %d",&m,&n);
	s[0]=m;t[0]=n;
	for(k=m/2,i=1;k!=0;i++)
	{
		s[i]=k;
		k=k/2;
        
	}
	for(j=n/2,l=1;j!=0;l++)
	{
		t[l]=j;
		j=j/2;
        
	}
	for(a=0;a<i;a++)
	{
		for(b=0;b<l;b++)
		{
			if(s[a]==t[b]) {sign=1; printf("%d\n",s[a]); break;}
		}
		if(sign==1) break;
	}
}