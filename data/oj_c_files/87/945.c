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
    int a[6],n,i;
	while(a[0]!=0){
		 for(i=0;i<6;i++){
	     scanf("%d",&a[i]);
		 }
		 if(a[0]!=0){
	     n=3600-a[1]*60-a[2]+(a[3]+12-a[0]-1)*3600+a[4]*60+a[5];
	     printf("%d\n",n);
		 }
		 else
			 return 0;
	}
  	return 0;
}
