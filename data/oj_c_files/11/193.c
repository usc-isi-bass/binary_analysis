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
	int n=0,N;
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	if(y%100!=0&&y%4==0){
		int p[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		if(d<1||d>p[m])printf("Illegal input.\n");
		else{
			int j;
			for(j=0;j<m;j++){
				n=n+p[j];
			}
			N=n+d;
			printf("%d\n",N);
		}
	}
	else if(y%4!=0){
		int q[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		if(d<1||d>q[m])printf("Illegal input.\n");
        else{
			int j;
			for(j=0;j<m;j++){
				n=n+q[j];
			}
			N=n+d;
			printf("%d\n",N);
		}
		
	}
	return 0;
}