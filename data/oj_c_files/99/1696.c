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
	int n,i;
	float zu1=0,zu2=0,zu3=0,zu4=0,a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%f",&a[i]);
	}

for(i=0;i<n;i++){
	if(a[i]>0&&a[i]<=18){
	zu1+=1;
	} 
	if(a[i]>18&&a[i]<=35){
	zu2+=1;
	} 
	if(a[i]>35&&a[i]<=60){
	zu3+=1;
	} 
	if(a[i]>60){
	zu4+=1;
	} 
	}
printf("1-18: %.2f%%\n",zu1/n*100);
printf("19-35: %.2f%%\n",zu2/n*100);
printf("36-60: %.2f%%\n",zu3/n*100);
printf("60??: %.2f%%\n",zu4/n*100);
return 0;
}