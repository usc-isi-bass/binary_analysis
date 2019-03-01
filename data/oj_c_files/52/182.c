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

//????????????
void move(int num[30],int n,int m)
{
	int *p;
	int end,j;
	end=*(num+n-1);
	for(j=1;j<=m;j++)
	{
		
		end=*(num+n-1);
		for(p=num+n-1;p>num;p--)
		{
			*p=*(p-1);
		}
			*num=end;
	}
	
}
/*void move(int num[30],int n,int m)
{
	int *p;
	int end;
	end=*(num+n-1);
	for(p=num+n-1;p>num;p--)
	{
		*p=*(p-1);
	}
		*num=end;
	m--;
	if(m>0)
	{
		move(num,n,m);
	}

}*/

int main()
{
	int n,m,i;
	int a[30];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	move(a,n,m);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i!=n-1)
		{
			printf(" ");
		}
	}
	return 0;
}