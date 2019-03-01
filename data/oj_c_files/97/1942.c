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


int main(int argc, char* argv[])
{
int a;
cin>>a;
int b,c,d,e,f,g;
b=a/100;
a=a-100*b;
c=a/50;
a=a-50*c;
d=a/20;
a=a-20*d;
e=a/10;
a=a-10*e;
f=a/5;
a=a-5*f;
g=a;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
cout<<f<<endl;
cout<<g<<endl;

}