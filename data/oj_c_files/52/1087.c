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
	void move(int number[20],int n,int m);
	int number[20],n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	move(number,n,m);
	for(i=0;i<n-1;i++)
	{
		printf("%d ",number[i]);
	}printf("%d",number[n-1]);
}
void move(int a[20],int n,int m)
{
	int *p,end;
	end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
    {*p=*(p-1);}
	*a=end;
	m--;
	if(m>0)move(a,n,m);
}