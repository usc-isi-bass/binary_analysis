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

int s[100];
int sl(int i,int n);
int main()
{
int i;
int n;
int s[100];
int a[100];
int b[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
  b[i]=sl(i,a[i]);
printf("%d\n",b[i]);
}
return 0;
}
int sl(int i,int n){
	int r;
s[0]=1;
s[1]=1;
for(i=2;i<n;i++){
   s[i]=s[i-1]+s[i-2];
}
r=s[n-1];
return r;
}

