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


int fen(int x,int y);

int main(){
	int n,i,m[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
		printf("%d\n",fen(m[i],2));
	}
	return 0;
}

int fen(int x,int y){
	int j,k;
	int result=1;
	if(x<y)
		return 0;
	for(j=y;j<x;j++)
	{
		if(x%j==0)
		result+=fen(x/j,j);
	}
	return result;
}