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
	int n,a[5],i;
	scanf("%d",&n);
    a[0]=n%10;a[1]=(int)(n%100)/10;
	a[2]=(int)(n%1000)/100;
	a[3]=(int)(n%10000)/1000;
	a[4]=(int)(n%100000)/10000;
	for(i=0;i<5;i++){
		if(a[i]!=0) printf("%d",a[i]);}
	return 0;
}