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
	int n,m=0,i,j,max[100],p[100][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&p[i][0],&p[i][1]);
	}
	for(i=0;i<100;i++){
		max[i]=0;
	}
	for(i=0;i<n;i++){
		if(p[i][0]>=90&&p[i][0]<=140&&p[i][1]>=60&&p[i][1]<=90){
			max[i]=max[i-1]+1;
		}
	}
	for(j=0;j<100;j++){
		if(max[j]>m){
			m=max[j];
		}
	}
	printf("%d\n",m);
	return 0;
}
