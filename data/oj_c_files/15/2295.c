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
int n,number[1001],i,p,count,start,end;
count=0;
scanf("%d",&n);
for(i=1;i<=n;i++){	
	start=0;
	end=0;
	for(p=1;p<=n;p++){scanf("%d",&number[p]);}
	for(p=1;p<=n-1;p++){
		if(start==0&&number[p]==0&&(p==1||number[p-1]!=0)&&number[p+1]!=0){start=p;}
		if(start!=0&&number[p]==0&&(p==1||number[p-1]!=0)&&number[p+1]!=0){end=p;}	
	}
	if(end-start<=1){continue;}
	count+=(end-start-1);



}
printf("%d",count);
return 0;}