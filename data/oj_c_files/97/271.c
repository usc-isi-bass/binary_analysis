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
	int data[6]={100,50,20,10,5,1};
	int num[6]={0};
	int sum,i;
	scanf("%d",&sum);
	for(i=0;i<6;i++){
		for(;;){
			if(sum-data[i]>=0){
				sum=sum-data[i];
		        num[i]++;
			}
			else break;
		}

	    printf("%d\n",num[i]);
	}

    return 0;
}

