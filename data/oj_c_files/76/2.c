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

struct array
{
	int s;
	int e;
}array[50000];
int main()
{
	int n,i,j,t,end;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&(array[i].s),&(array[i].e));
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(array[i].s>array[j].s){
				t=array[i].s;
				array[i].s=array[j].s;
				array[j].s=t;
				t=array[i].e;
				array[i].e=array[j].e;
				array[j].e=t;
			}
		}
	}
	t=0;
	end=array[0].e;
	for(i=0;i<n;i++){
		if(end>=array[i].s){
			if(end<array[i].e){
				end=array[i].e;
			}
			
		}
		else{
			t=1;
			break;
		}
	}
	if(t==1) printf("no\n");
	else printf("%d %d\n",array[0].s,end);
	return 0;
}