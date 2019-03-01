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
	int a[8][8],i,j,k,l,m[8],n[8],f=0,s;
	scanf("%d,%d",&i,&j);
	for(k=0;k<i;k++)
		for(l=0;l<j;l++)
			scanf("%d",&a[k][l]);
		for(k=0;k<i;k++)
			for(s=l=0;l<j;l++)
				if(s<a[k][l]) 
				{s=a[k][l];  m[k]=l;}
		for(l=0;l<j;l++)
			for(s=10000,k=0;k<i;k++)
				if(s>a[k][l])
                {s=a[k][l];  n[l]=k;}
		for(k=0;k<i;k++)
			if(n[m[k]]==k)  {printf("%d+%d",k,m[k]); f=1;
			break;}
			if(f==0) printf("No");
	
}