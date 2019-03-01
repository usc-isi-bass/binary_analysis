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

// ?????.cpp : Defines the entry point for the console application.
//

int fen(int x,int y);
int main(int argc, char* argv[])
{
	int i,m,n,sum;
	scanf("%d",&sum);
	for(i=0;i<sum;i++){
		scanf("%d%d",&m,&n);
		printf("%d\n",fen(m,n));
	}
	return 0;
}


int fen(int x,int y){
	int result=0;
	if(y!=1)result+=fen(x,y-1);
	if(x-y>=0&&y!=1)result+=fen(x-y,y);
	if(y==1){
		result++;
		return result;
	}
	return result;
}

