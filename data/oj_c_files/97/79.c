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

int main(){
	int n,m,p,q,r,s;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&n);
	while(n>=100)
	{
		n=n-100;
		a++;
	}
	m=n;
    while(m>=50)
	{
		m=m-50;
		b++;
	}
	p=m;
	while(p>=20)
	{
		p=p-20;
		c++;
	}
	q=p;
	while(q>=10)
	{
		q=q-10;
		d++;
	}
	r=q;
	while(r>=5)
	{
		r=r-5;
		e++;
	}
	s=r;
	while(s>=1)
	{
		s=s-1;
		f++;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
    return 0;
}