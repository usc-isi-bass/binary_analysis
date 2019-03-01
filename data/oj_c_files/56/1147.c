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
	int a;
	int b[5];
	scanf("%d",&a);
	int i;
    b[0]=a%10;
	b[1]=((a%100)-b[0])/10;
	b[2]=((a%1000)-(a%100))/100;
	b[3]=((a%10000)-(a%1000))/1000;
	b[4]=a/10000;
	for(i=0;i<5;i++){
		if(b[i] != 0){
			printf("%d", b[i]);
		}
	}
   return 0;
}