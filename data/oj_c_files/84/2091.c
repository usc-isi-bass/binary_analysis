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

int main(){
	int num,max1,max2;
	int n;
	int a;
	int i;
    scanf("%d%d",&n,&num);
	max1= num;
scanf("%d",&num);
		if (num>max1){
		 a=max1;
		 max1=num;
		 max2=a;}
		else{
			max2=num;
			}
       for (i=0;i<n-2;i++){
		scanf("%d",&num);
		if (num>max1){
		 a=max1;
		 max1=num;
	     max2=a;}
	else if (num>max2)
		max2=num;}
    printf("%d\n%d\n",max1,max2);
	return 0;
}