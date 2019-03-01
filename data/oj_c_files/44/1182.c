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

int reverse(int num){
	int length,N=abs(num),i;
	for(i=0;N>=pow(10,i);i++)
		length=i+1;
	int sum=0,l=length;
	for(i=0;i<=length-1;i++,l--)
	sum+=(int)(num%(int)pow(10,i+1)/pow(10,i))*pow(10,l-1);
	return sum;
}
int main(){
int num,i;
for(i=0;i<6;i++){
	scanf("%d",&num);
	printf("%d\n",reverse(num));
}
return 0;
}