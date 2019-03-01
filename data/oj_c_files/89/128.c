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
	int i,j,n,in[MAXN]={0},ou[MAXN]={0};
	for (scanf("%d%d%d",&n,&i,&j);i+j>0;scanf("%d%d",&i,&j)){
		in[i]++;
		ou[j]++;
	}
	for (i=0;i<n;i++)
		if (in[i]==0&&ou[i]==n-1){ printf("%d\n",i);return 0;}
		printf("NOT FOUND\n");
	return 0;

	
}