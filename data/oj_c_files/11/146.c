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
	int year,month,day,sum,i;
	int N[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&year,&month,&day);
    sum=0;
	for(i=1;i<month;i++){
		sum=sum+N[i-1];}
    if((year%4==0&&year%100!=0)||year%400==0) sum=sum+1;
	sum=sum+day;
    printf("%d",sum );
	
}