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


void main()
{
	int n,i,len[200],max,maxi,min,mini;
	char w[200][50];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",*(w+i));
		*(len+i)=strlen(*(w+i));

		//max,min//
		if(!i){
			max=min=*(len+i);
			maxi=mini=i;
		}
		else{
			if(*(len+i)>max){
				max=*(len+i);
				maxi=i;
			}
			if(*(len+i)<min){
				min=*(len+i);
				mini=i;
			}
		}
	}
	//put//
	puts(*(w+maxi));
	puts(*(w+mini));
}