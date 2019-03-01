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
	int i,j,k,n,m,li,ri,a[501];
scanf("%d",&n);
j=-1;a[0]=0;
for(i=0;i<n;i++){
scanf("%d",&m);
if(m%2==1){
j++;
a[j]=m;
if(j>0){
	li=j-1;ri=j;
	while((a[li]>a[ri])&&(li>=0)){
	k=a[ri];
	a[ri]=a[li];
	a[li]=k;
	ri--;
	li--;
	}
}
}
}
for(i=0;i<j;i++){
printf("%d,",a[i]);
}
printf("%d",a[j]);
return 0;
}