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


void main(){
	long secmax=-32767,max=-32767;
	int n,i=-1,chg=0,maxchg=0;
	char ch;
	do{
		i++;
		scanf("%d",&n);
		if(n>max){
			secmax=max;
			if(maxchg) chg=1;
			max=n;
			maxchg=1;
		}else if(n>secmax&&n!=max){
			secmax=n;
			chg=1;
		}
		ch=getchar();
	}while(ch==',');
	if(i<2||!chg)
		printf("No");
	else
		printf("%d",secmax);
}