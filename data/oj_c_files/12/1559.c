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
int a[16][16],i,j,k,m[16]={0},n,len,sum;
i=0;
	do{
	i=i+1;
j=0;
do{
j=j+1;
scanf("%d",&a[i][j]);
m[i]=m[i]+1;}while((a[i][j]!=0) && (a[i][j]!=-1));

}while(a[i][1]!=-1);
len=i;
for (i=1;i<len;i++)
{
sum=0;
	for (j=2;j<=m[i];j++)
	{
		for (k=1;k<j;k++)
		{if ((a[i][j]==2*a[i][k]) || (a[i][j]*2==a[i][k])) sum=sum+1;
		}
	}
	printf("%d\n",sum);
}
}