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
	int length,i,j,temp,start=-1,end;
	scanf("%d",&length);
	for(i=0;i<length;i++)
		for(j=0;j<length;j++){
			scanf("%d",&temp);
			if(temp==0){
				if(start==-1) start=i*length+j;
				end=i*length+j;
			}
		}
	printf("%d",(end/length-start/length-1)*(end%length-start%length-1));
}