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

struct area{
	int start;
	int end;
};
void main(){
	struct area area[50002],temp;
	int n,i,j,s,e,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&area[i].start,&area[i].end);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(area[i].start>area[j].start){
				temp=area[i];
				area[i]=area[j];
				area[j]=temp;
			}
		}
	}
		s=area[0].start;
		e=area[0].end;
	for(i=0;i<n;i++){
		if(area[i].start>e){
			
			flag=1;
                            break;
		}
		else if(area[i].start<=e  && e<=area[i].end){
			e=area[i].end;
		}
	}
	if(flag)
		printf("no");
	else
		printf("%d %d\n",s,e);
}

