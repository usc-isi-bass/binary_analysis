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
	int put(int,int);
	int n,m,t;
	int way;
	int i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	   scanf("%d %d",&m,&n);
       way=put(m,n);
	   printf("%d\n",way);
	}
}
int put(int m,int n)
{
	int way;
	if(m==1||n==1||m==0||n==0)
		way=1;
	else if(m<n)
		way=put(m,n-1);
	else if(m>=n)
		way=put(m,n-1)+put(m-n,n);
	return(way);
}
