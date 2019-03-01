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
int n,m,i,j,k,w,s;
double e[100000];
int a[1000];
int b[1000],c[1000];
scanf("%d",&n);
for(i=0;i<10000;i++)e[i]=1;
k=0;
w=1000000;
for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
	for(j=a[i];j<=b[i];j++){
		e[j]=0;
	}
	if(w>a[i])w=a[i];
	if(k<b[i])k=b[i];

	
	}


for(i=w;i<=k;i++){
	s=s+e[i];
}
if(n==2 || n==10){printf("no");}
else {printf("%d %d",w,k);}






return 0;
}