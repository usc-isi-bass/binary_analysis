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

int main( )
{
    int p,b,c,h,q,w,e,a,s,d,m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>q>>w>>e;
    cin>>a>>s>>d;
    p=(a-q)*365;
    for(int i=0;i<w-1;i++)
    	p=p-m[i];
    for(int i=0;i<s-1;i++)
    	p=p+m[i];
    p=p+d-e;
	b=q*10000+w*100+e;
	c=a*10000+s*100+d;
    for(int i=q;i<a+1;i++)
    	{
    	h=i*10000+2*100+29;
    	if((i%4==0&&i%100!=0)||(i%400==0)&&(b<=h)&&(c>h))
    	p=p+1;
    	}
    if(w==2&&s==2&&e==29&&d==29)
    	p=p+1;
    cout<<p<<endl;
    return 0;
}
