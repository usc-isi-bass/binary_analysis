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
{ int sum(int n,int k);
int n,k,s;
scanf("%d %d",&n,&k);
s=sum(n,k);
printf("%d",s);
return 0;
}
int sum(int n,int k){
	int s,i;
s=n;
for(i=1;i<n-1;i++)
s=s*n;
s=s-k;
s=s*n+k;
return s;
}