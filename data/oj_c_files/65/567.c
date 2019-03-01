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
    int q,i,a=0,b=0,m,n;

	scanf("%d",&q);

	for(i=0;i<q;i++){
		scanf("%d %d",&m,&n);

		if(m==0&&n==1) a++;
		else if(m==0&&n==2) b++;
		
		else if(m==1&&n==2) a++;
		else if(m==1&&n==0) b++;
		
		else if(m==2&&n==0) a++;
		else if(m==2&&n==1) b++;}

	if(a>b) printf("A");
	else if(a<b) printf("B");
	else printf("Tie");
		

		






	return 0;
}