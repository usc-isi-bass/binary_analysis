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
    int n,i,num[100],max=0,max2=0,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]>max&&num[i]>max2){
			e=max;
			max=num[i];
            max2=e;
		}else if(num[i]>max2){max2=num[i];}
		
	}

	printf("%d\n%d\n",max,max2);
	return 0;
}