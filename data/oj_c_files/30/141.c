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


void main()
{
int a[100];
int n,i,sum=0;
for(i=0;i<100;i++){
a[i]=i+1;
}

scanf("%d",&n);
for(i=0;i<n;i++){
if(a[i]%7==0){
a[i]=0;
}
else if((a[i]-7)%10==0){
a[i]=0;
}
else if((a[i]/10)-7==0){
a[i]=0;
}
}

for(i=0;i<n;i++){
sum=sum+a[i]*a[i];
}

printf("%d\n",sum);
}
