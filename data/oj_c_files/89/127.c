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

int n,a[10000];
void read(){
	int i,j;
	for (scanf("%d%d%d",&n,&i,&j); i+j!=0;scanf("%d%d",&i,&j)){
		a[j]++;
	}
}

	
int main(){
	int i;
	read();
	for (i=0;i<n;i++)
		if (a[i]==n-1) printf("%d\n",i);
	return 0;
}