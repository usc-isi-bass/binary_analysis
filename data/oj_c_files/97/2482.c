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

//??????????
//?????2011?1?
//???????
int main()
{
int a,b,c,d,e,f,g,sum; //????
cin>>sum;              //?????
a=sum/100;            //??100???
b=(sum-100*a)/50;        //??50???
if(b<0)
b=0;
c=(sum-a*100-b*50)/20; //??20???
if(c<0)
c=0;
d=(sum-a*100-b*50-c*20)/10; //??10???
if(d<0)
d=0;
e=(sum-a*100-b*50-c*20-d*10)/5;//??5???
if(e<0)
e=0;
f=sum-a*100-b*50-c*20-d*10-e*5;//??1???
if(f<0)
f=0;
cout<<a<<endl;//????
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
cout<<f<<endl;
return 0;
}
