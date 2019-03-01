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
    int n,a[5],i;
	scanf("%d",&n);
	a[0]=n/10000;
	a[1]=(n%10000)/1000;
	a[2]=(n%1000)/100;
	a[3]=(n%100)/10;
	a[4]=(n%10);
	for(i=4;i>=0;i--){
		if(a[i]==0)
			continue;
			printf("%d",a[i]);
		
	}
	return 0;
}