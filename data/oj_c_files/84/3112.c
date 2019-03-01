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
    int n,a,i,max1=-10000,max2=-10000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
        if (a>max1){
			max2=max1;
			max1=a; }  
		else if(a<max1&&a>max2)
		    max2=a;
		else if(a<max2)
			;
	}
	printf("%d\n%d",max1,max2);
	return 0;
}