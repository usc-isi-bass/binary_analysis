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
int n,a,s,d,f,g,h;
cin>>n;
a=n/100;
s=(n-100*a)/50;
d=(n-100*a-50*s)/20;
f=(n-100*a-50*s-20*d)/10;
g=n%10/5;
h=n%5;
cout<<a<<endl<<s<<endl<<d<<endl<<f<<endl<<g<<endl<<h<<endl;                                                        
                                                                                          
return 0;
}