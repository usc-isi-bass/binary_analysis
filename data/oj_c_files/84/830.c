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
int n,e,i,m,t;
scanf("%d",&n);
int a,b,c;
scanf("%d %d",&a,&b);
if(a<b){
t=a;
b=a;
a=t;
}
for(i=0;i<n-2;i++){
scanf("%d",&c);
if(c>a){

e=b;
b=a;
a=c;
m=c;
}
else 
if(a>c&&c>b)
{
m=b;
b=c;
c=m;
}
}
printf("%d\n%d\n",a,b);

	return 0;
}
