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

int a[25];
int n;

void main()
{
	
	int i;
	int max(int);
	int num=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		num=max(i)>num?max(i):num;
	printf("%d",num);
	    
}


int max(int chu)
{
	int z=1,tempj;
	int i,j,k;
	
	if(chu==n-1) z=1;
	else{
			for(j=chu+1;j<n;j++)
			{
				if(a[j]>a[chu]) continue;
				tempj=1+max(j);
				z=tempj>z?tempj:z;
				tempj=0;
				
			}
			
		}
	
	return z;
}