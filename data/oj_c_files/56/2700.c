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
	int n,a[5],p,i;
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
	a[0]=n%10;p=a[0];
	if(n%100!=n) {a[1]=(n%100-a[0])/10;p=10*p+a[1];}
	else {p=10*p+(n%100-a[0])/10+100*(n-n%100);break;}
	if(n%1000!=n) {a[2]=(n%1000-10*a[1]-a[0])/100;p=10*p+a[2];}
	else {p=10*p+(n%1000-10*a[1]-a[0])/100+1000*(n-n%1000);break;}
	if(n%10000!=n) {a[3]=(n%10000-100*a[2]-10*a[1]-a[0])/1000;p=10*p+a[3];}
	else {p=10*p+(n%10000-100*a[2]-10*a[1]-a[0])/1000+10000*(n-n%10000);break;}
	if(n%100000!=n) {a[4]=(n%100000-1000*a[3]-100*a[2]-10*a[1]-a[0])/10000;p=10*p+a[4];}
	else {p=10*p+(n%100000-1000*a[3]-100*a[2]-10*a[1]-a[0])/10000+100000*(n-n%100000);break;}
	}
	printf("%d\n",p);
}