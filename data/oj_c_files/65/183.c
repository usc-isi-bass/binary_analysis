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
	int n,a,b,i,k,t;
	scanf("%d",&n);
          k=0;t=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if((a==0&&b==1)||(a==2&&b==0)||(a==1&&b==2)){
			k=k+1;}else{
                  if((b==0&&a==1)||(b==2&&a==0)||(b==1&&a==2)){
				t=t+1;}}
	}
	if(k>t){printf("A");
	}else
	{
		if(k<t){
			printf("B");}else{
				printf("Tie");
			}
	}
	return 0;
}
