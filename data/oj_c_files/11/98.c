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

int main(int argc, char* argv[])
{
	int year,month,day,n,mday=0,i=1;
    int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d\n",&year,&month,&day);
    for(i=1;i<month+1;i++){
			mday=mday+p[i-1];
	   }
	if((year%4==0&&year%100!=0)||year%400==0){
		if(month>=3){
			mday=mday+1;}
		else {
			mday=mday;
		}
	}
	n=mday+day;
	printf("%d",n);
	return 0;
}
