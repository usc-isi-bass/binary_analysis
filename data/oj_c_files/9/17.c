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



//#include <math.h>




int main()
{
	int n;
	scanf("%d",&n);
	
	struct pe{
		char id[100];
		int y;
	}*p;
	p=(struct pe *)malloc(sizeof(pe)*n);
	
	int i,j;
	
	for(i=0;i<n;i++){
		scanf("%s %d",(p+i)->id,&(p+i)->y);
	}
	
	struct pe tp;
	
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if((p+j+1)->y>=60 && (p+j)->y<(p+j+1)->y){
				tp=p[j+1];
				p[j+1]=p[j];
				p[j]=tp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%s\n",(p+i)->id);
	}
	
	return 0;
}

