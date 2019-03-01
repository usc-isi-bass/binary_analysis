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
{int m=0,k; 
int i,n,j; 
scanf("%d",&n);
j=n;
int sz[j],ss[j]; 
for(i=0;i<j;i++){
	scanf("%d %d",&sz[i],&ss[i]);
}
for(i=0;i<n;i++){
	if(sz[i]>=90&&sz[i]<=140&&ss[i]>=60&&ss[i]<=90){
		m++;}
	else { k=(k>=m)?k:m;
	m=0;
}}
	k=(k>=m)?k:m;

printf("%d",k);
return 0;
}