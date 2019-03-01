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

// 2.cpp : Defines the entry point for the console application.
//



int main(int argc, char* argv[])
{
	int n,k;
	scanf("%d %d",&n,&k);
	int i,m,apple=1,count;
	while(1){
		count=0;
		m=apple;
		for(i=0;i<n;i++){
			if(m%n==k&&(m-k)/n>=1){
				count++;
				m=(m-k)*(n-1)/n;
			}
			else{
				break;
			}
		}
		if(count==n){
			printf("%d\n",apple);
			break;
		}
		else{
			apple++;
		}
	}
	return 0;
}
