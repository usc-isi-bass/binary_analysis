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
	int n,i,j,t,k=0,ss[10000];
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		t=1;
		for(j=2;j<i;j++){
			if(i%j==0)
				t=0;
		}
		if(t==1){
			ss[k]=i;
			k++;
		}
	}
	t=0;
	for(i=0;i<k;i++){
		if(ss[i+1]-ss[i]==2){
			printf("%d %d\n",ss[i],ss[i+1]);
			t++;
		}
		else if(ss[i+2]-ss[i]==2){
			printf("%d %d\n",ss[i],ss[i+2]);
			t++;
		}
	}
	if(t==0)
		printf("empty");
	return 0;
}