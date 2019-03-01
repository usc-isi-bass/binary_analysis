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

int main()
{   
	int m,n;
	scanf("%d %d\n",&n,&m);
    int i,a[100];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    int*point;
	//for(i=n-m;i<n;i++)
	//{
      //  printf("%d",a[i]);
	//}
	//for(i=0;i<n-m-1;i++)
	//{
	//	printf("%d",a[i]);
	//}
	//printf("%d\n",a[n-m-1]);
	for(point=&a[n-m];point<a+n;point++)
	{
		printf("%d ",*point);
	}
	for(point=a;point<a+n-m-1;point++)
	{
		printf("%d ",*point);
	}
	printf("%d\n",a[n-m-1]);
	return 0;
}
