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


int change(int sz[100][100],int n);
int main(int argc, char* argv[])
{
	int n,i,j,a,add=0,shu,add1=0,add2=0;
	scanf("%d",&n);
	for(i=3;i<n+1;i++){
		a=pow(i,0.5);
		for(j=2;j<a+1;j++){
			if(i%j==0)
				add++;
		}
		if(add==0){
			add1++;
			if(add1==1)
				shu=i;
			else{
				if(i-shu==2)
					printf("%d %d\n",shu,i);
				add2++;
			}
			shu=i;
		}
		add=0;
	}
	if(add2==0||n==2||n==3)
		printf("empty\n");
	return 0;
}
