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
 	int n,i,max1,max2;
 	scanf("%d",&n);
 	int a[n];
 	for(i=0;i<n;i++){
 	    scanf("%d\n",&a[i]);
    }
    if(a[0]>=a[1]){
        max1=a[0];
		max2=a[1]; 
    }
    else {
        max1=a[1];
        max2=a[2];
    }
    for(i=2;i<n;i++){
        if(a[i]>=max1){
		    max2=max1;
			max1=a[i];
		}
		else if(a[i]<max1 && a[i]>=max2)
		    max2=a[i];
    }
	printf("%d\n",max1);
	printf("%d",max2);
	return 0;					  
           
}
