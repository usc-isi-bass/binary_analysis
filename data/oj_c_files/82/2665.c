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
	int x,y,i,j=0,max=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %d",&x,&y);
	if(x<=140&&x>=90&&y<=90&&y>=60){
	j=j+1;
	}else{
		if(j>max){
			max=j;}
	j=0;
	}
	}
	if(j>max){
	printf("%d",j);
	}
	else{
		printf("%d",max);
	}
	return 0;
}