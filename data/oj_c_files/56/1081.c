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
	int n,a[10];
	scanf("%d",&n);
	if(n<100){
		a[0]=n%10;
		a[1]=(n-a[0])/10;
		printf("%d%d\n",a[0],a[1]);
	}
	else if(n<1000){
		a[0]=n%100;
		a[1]=(n-a[0])/100;
		a[2]=n-100*a[1];
		a[3]=a[2]%10;
		a[4]=(a[2]-a[3])/10;
		printf("%d%d%d\n",a[3],a[4],a[1]);
	}
	
	else if(n<10000){
		a[0]=n%1000;
		a[1]=(n-a[0])/1000;
		a[2]=a[0]%100;
		a[3]=(a[0]-a[2])/100;
		a[4]=a[2]%10;
		a[5]=(a[2]-a[4])/10;
		printf("%d%d%d%d\n",a[4],a[5],a[3],a[1]);
	}
	else{
		a[7]=n%10000;
		a[6]=(n-a[7])/10000;
		a[0]=a[7]%1000;
		a[1]=(a[7]-a[0])/1000;
		a[2]=a[0]%100;
		a[3]=(a[0]-a[2])/100;
		a[4]=a[2]%10;
		a[5]=(a[2]-a[4])/10;
		printf("%d%d%d%d%d\n",a[4],a[5],a[3],a[1],a[6]);
	}
	return 0;
}