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
	int n,k,a[1000],t,j,p=0,i;
	scanf("%d%d",&n,&k);
	scanf("%d",&a[0]);
	
	
	for(i=1;i<n;i++){
    t=i;
		scanf("%d",&a[i]);

for(j=0;j<t;j++){
	if(a[j]==k-a[i]){
        p=1;
		break;}
}
	}
if(p==0)printf("no");
if(p==1)printf("yes");	
	
	
	
	
	
	return 0;
}

