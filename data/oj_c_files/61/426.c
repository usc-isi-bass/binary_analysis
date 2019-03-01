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
int k;
cin>>k;
int b[k];
for(int i=0;i<k;i++)
{int a;
cin>>b[i];
double n;
n=b[i];
a=sqrt(5);
a=((pow(((1+sqrt(5))/2),n)-(pow(((1-sqrt(5))/2),n)))/sqrt(5));
cout<<a<<endl;
}
return 0;
}