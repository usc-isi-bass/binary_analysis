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

int main()
{
	int n,i,s,max;
	int sz[100][2]={0};
	s=0;
	max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&sz[i][0],&sz[i][1]);
	}
	for(i=0;i<n;i++){
		if(sz[i][0]>=90 && sz[i][0]<=140 && sz[i][1]>=60 && sz[i][1]<=90){
			s+=1;
		}else{
			if(s>max){
				max=s;
			}s=0;
		}
	}
	if(s>max){
		max=s;
	}printf("%d",max);
	return 0;
}
