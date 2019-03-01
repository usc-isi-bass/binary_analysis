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
    int i;
    int a[10];
    int reverse(int b);
    for(i=1; i<=6; i++)
    scanf("%d", &a[i]);
    for(i=1; i<=6; i++)
	{
		a[i]=reverse(a[i]);
		printf("%d\n", a[i]);
	}
	return 0;
}

int reverse(int b)
{
    int q, w, e, r, t, y, u, i, o, p, rev;
    if(b/1000000000!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*1000000000+o*100000000+i*10000000+u*1000000+y*100000+t*10000+r*1000+e*100+w*10+q;
        return(rev);
    }
    if(b/1000000000==0 && b/100000000!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*100000000+o*10000000+i*1000000+u*100000+y*10000+t*1000+r*100+e*10+w; 
        return(rev);              
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*10000000+o*1000000+i*100000+u*10000+y*1000+t*100+r*10+e; 
        return(rev);              
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000==0 && b/1000000!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*1000000+o*100000+i*10000+u*1000+y*100+t*10+r; 
        return(rev);                
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000==0 && b/1000000==0 && b/100000!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*100000+o*10000+i*1000+u*100+y*10+t; 
        return(rev);                  
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000==0 && b/1000000==0 && b/100000==0 && b/10000!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*10000+o*1000+i*100+u*10+y; 
        return(rev);               
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000==0 && b/1000000==0 && b/100000==0 && b/10000==0 && b/1000!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*1000+o*100+i*10+u; 
        return(rev);               
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000==0 && b/1000000==0 && b/100000==0 && b/10000==0 && b/1000==0 && b/100!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*100+o*10+i; 
        return(rev);               
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000==0 && b/1000000==0 && b/100000==0 && b/10000==0 && b/1000==0 && b/100==0 && b/10!=0)
    {
        q=b/1000000000;
        w=(b-q*1000000000)/100000000;
        e=(b-q*1000000000-w*100000000)/10000000;
        r=(b-q*1000000000-w*100000000-e*10000000)/1000000;
        t=(b-q*1000000000-w*100000000-e*10000000-r*1000000)/100000;
        y=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000)/10000;
        u=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000)/1000;
        i=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000)/100;
        o=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100)/10;
        p=(b-q*1000000000-w*100000000-e*10000000-r*1000000-t*100000-y*10000-u*1000-i*100-o*10)/1;
        rev=p*10+o; 
        return(rev);               
    }
    if(b/1000000000==0 && b/100000000==0 && b/10000000==0 && b/1000000==0 && b/100000==0 && b/10000==0 && b/1000==0 && b/100==0 && b/10==0)
    {
        rev=b;
        return(rev);
    }
}
