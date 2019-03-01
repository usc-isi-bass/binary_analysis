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
int a[1000],b[1000],i,zhishu,shu;
for(i=0;i<1000;i++){
	 if(i==0){
		 a[0]=1;	 
	 }
	 else{
		 if(i==1){
			 a[i]=1;
		 }
		 else{
			 a[i]=a[i-1]+a[i-2];
		 }
	 }
 }

  scanf("%d",&zhishu);
for(i=0;i<zhishu;i++){
scanf("%d",&shu);
b[i]=a[shu-1];
}
for(i=0;i<zhishu;i++){
printf("%d\n",b[i]);
}
return 0;
}
