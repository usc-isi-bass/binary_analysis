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
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x;
	
	scanf("%d%d%d",&a,&b,&c);

	d=31+c;
	e=59+c;
	f=90+c;
	g=120+c;
	h=151+c;
	i=181+c;
	j=212+c;
	k=243+c;
	l=273+c;
	m=304+c;
	n=334+c;
	o=60+c;
	p=91+c;
	q=121+c;
	r=152+c;
	s=182+c;
	t=213+c;
	u=244+c;
	v=274+c;
	w=305+c;
	x=335+c;



	if(b==1)
		printf("%d",c);
	if(b==2)
		printf("%d",d);
	if((b==3)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",e);
	if((b==4)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",f);
	if((b==5)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",g);
	if((b==6)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",h);
	if((b==7)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",i);
	if((b==8)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",j);
	if((b==9)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",k);
	if((b==10)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",l);
	if((b==11)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
		printf("%d",m);
	if((b==12)&&(a%100!=0&&a%4!=0||a%100==0&&a%400!=0))
	    printf("%d",n);
	if((b==3)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",o);
	if((b==4)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",p);
	if((b==5)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",q);
	if((b==6)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",r);
	if((b==7)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",s);
	if((b==8)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",t);
	if((b==9)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",u);
	if((b==10)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",v);
	if((b==11)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",w);
	if((b==12)&&(a%100!=0&&a%4==0||a%400==0))
		printf("%d",x);
    return 0;
}