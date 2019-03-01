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
int n;
cin>>n;
for(int i=0;i<n;i++){
double a,b,c;
cin>>a>>b>>c;
double d=b*b-4*a*c;
if(abs(d)<1e-8)d=0;
double e=-b/2/a;
if(abs(e)<1e-8)e=0;
if(abs(d)<1e-8)printf("x1=x2=%.5f",e);
else if(d>0)printf("x1=%.5f;x2=%.5f",e+sqrt(d)/2/a,e-sqrt(d)/2/a);
else {
d=abs(d);
if(a>0)
printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",e,sqrt(d)/2/a,e,sqrt(d)/2/a);
else printf("x1=%.5f-%.5fi;x2=%.5f+%.5fi",e,-sqrt(d)/2/a,e,-sqrt(d)/2/a);
}
cout<<endl;
}
return 0;
}