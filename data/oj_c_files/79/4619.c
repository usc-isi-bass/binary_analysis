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
	int i,j,n,t,a[300],b[300];int N,M;
	do
	{
		scanf("%d %d",&N,&M);
		if(N==0&&M==0)break;
        for(i=1;i<=N;i++){b[i]=i;a[i]=i;}
        for(;N>1;)
		   {
             for(i=1;i<=N;i++)b[i]=a[i];
			 t=M%N;N--;
			 for(j=1;j<=N;j++)
			 {
				if(t+j<=N+1)a[j]=b[t+j];
				if(t+j>N+1)a[j]=b[t+j-N-1];
			 }
		   }
		   printf("%d\n",a[1]);
		   
	}while(N!=0&&M!=0);
}