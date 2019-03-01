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
	int a,s[6]={0,0,0,0,0,0};
	scanf("%d",&a);
	s[0]=a/100;
	s[1]=(a%100)/50;
	s[2]=((a%100)%50)/20;
	s[3]=(((a%100)%50)%20)/10;
	s[4]=((((a%100)%50)%20)%10)/5;
	s[5]=(((((a%100)%50)%20)%10)%5)/1;
	printf("%d\n",s[0]);
	printf("%d\n",s[1]);
	printf("%d\n",s[2]);
	printf("%d\n",s[3]);
	printf("%d\n",s[4]);
	printf("%d",s[5]);
			

	return 0;
}