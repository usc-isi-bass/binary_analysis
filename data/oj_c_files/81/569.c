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
	int f(int (*p)[5],int n,int m);
	int a[5][5],m,n,i,j,k,(*p)[5];
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	scanf("%d%d",&n,&m);
	p=a;
    k=f(p,n,m);
	if(k==0) printf("error");
	if(k==1)
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	if(j==0) printf("%d",a[i][j]);
	else printf(" %d",a[i][j]);
	printf("\n");}
}
int f(int (*p)[5],int n,int m)
{
	int j,temp;
	if(n<0||n>4||m<0||m>4) return 0;
	else 
		for(j=0;j<5;j++)
		{temp=*(*(p+n)+j);*(*(p+n)+j)=*(*(p+m)+j);
		*(*(p+m)+j)=temp;}
	return 1;
}
