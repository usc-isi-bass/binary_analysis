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
	int N;
	int a1=3,a2=5,a3=7;
	scanf("%d",&N);
	if (N%a1==0 && N%a2==0 && N%a3==0)
		printf("3 5 7\n");
	else if (N%a1==0 && N%a2==0 && N%a3!=0)
	printf("3 5\n");
	else if(N%a2==0&&N%a3==0&&N%a1!=0)
		printf("5 7\n");
	else if(N%a1==0&&N%a3==0&&N%a2!=0)
		printf("3 7\n");
	else if(N%a1==0&&N%a2!=0&&N%a3!=0)
		printf("3\n");
	else if(N%a2==0&&N%a1!=0&&N%a3!=0)
		printf("5\n");
	else if (N%a3==0&&N%a1!=0&&N%a2!=0)
		printf("7\n");
	else if(N%a1!=0&&N%a2!=0&&N%a3!=0)
		printf("n\n");
}
	
		


		
	
