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
	int m,i,j,b,su;
	scanf("%d",&m);
	for(i=3;i<=m/2;i+=2){
		su=1;
		for(j=2;j<i;j++){
			if(i%j==0) su=0;
		}
		if(su==1){
			b=m-i;
			for(j=2;j<b;j++){
				if(b%j==0) su=0;
			}
			if(su==1)printf("%d %d\n",i,b);
		}
	}
	return 0;
}

