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
	int x;
	scanf("%d",&x);
	int a[7]={0,100,50,20,10,5,1};
	int b[7]={0};
	int i;
	for(i=1;i<7;i++){
		x=x-a[i-1]*b[i-1];
		b[i]=x/a[i];
	}
	for(i=1;i<7;i++)
		printf("%d\n",b[i]);
	return 0;
}