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
	void move(int a[],int n,int m);
	int a[100],n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<n;i++)
		printf("%d%c",a[i],(i==n-1)?'\n':' ');
}
void move(int a[],int n,int m)
{
	int *p,t=*(a+n-1);
	for(p=a+n-1;p>a;p--)
	*p=*(p-1);
	*a=t;
	m--;
	if(m>0)move(a,n,m);
}
