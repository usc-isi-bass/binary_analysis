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
int n,x[20],ai,i,j,b;
x[1]=1;
x[2]=1;
for(j=3;j<=20;j++)
	x[j]=x[j-1]+x[j-2];
cin>>n;
for(i=1;i<=n;i++){
	cin>>ai;
	b=x[ai];
	cout<<b<<endl;
}
return 0;
}
