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
	void move(int num[],int m,int n);
	int num[100],m,n,i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&num[i]);
	}
	move(num,m,n);
	printf("%d",num[0]);
	for(i=1;i<m;i++)
	{
		printf(" %d",num[i]);
	}
	printf("\n");
}
void move(int num[],int m,int n)
{
	int *p,end;
	end=*(num+m-1);
	for(p=num+m-1;p>num;p--)
		*p=*(p-1);
	*num=end;
	n--;
	if(n>0)
		move(num,m,n);
}
