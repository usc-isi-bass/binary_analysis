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

int main (){
	int m,n,s,i,a[200],b[200];

scanf("%d",&n);
s=0;
m=0;
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if(a[i]==1&&b[i]==0)
		s++;
if(a[i]==0&&b[i]==2)
		s++;
if(a[i]==2&&b[i]==1)
		s++;
if(a[i]==0&&b[i]==1)
		m++;
if(a[i]==1&&b[i]==2)
		m++;
if(a[i]==2&&b[i]==0)
		m++;
}
if(s>m)
	printf("B");
if(s==m)
	printf("Tie");
if(s<m)
	printf("A");
		
    
return 0;
}

