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

int n,m;//n????????????m????????
main()
{
	void f(int a[]);
	int i,a[100];//??n????100.??a[100]???n???
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f(a);
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
          printf("%d",a[n-1]);
}
void f(int a[])
{
	int i,*p=a,t;
	for(i=n-1;i>0;i--)//???????1???
	{
		t=*(p+i);
		*(p+i)=*(p+i-1);
		*(p+i-1)=t;
	}
	m--;
	if(m!=0)f(a);//???????0?????
}