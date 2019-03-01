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
	int m,i,j,t,k;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2){
		for(j=3;j<i;j=j+2)
			if(i%j==0)
				break;
		if(j<i)
			continue;
		else{
			t=m-i;
			for(k=3;k<t;k=k+2)
				if(t%k==0)
					break;
			if(k==t)
				printf("%d %d\n",i,t);
		}
	}
	return 0;
}