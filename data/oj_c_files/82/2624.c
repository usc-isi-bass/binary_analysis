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
	int i,n,high,low,number,k;
	scanf("%d",&n);
	number=0;
	k=0;
	for(i=1;i<=n;i++){
		scanf("%d %d",&high,&low);
		if((high<=140)&&(high>=90)&&(low>=60)&&(low<=90)){
			number+=1;
		}else{
			if(k<number){
				k=number;
			};
			number=0;
			continue;
		}
		if(k<number){
			k=number;
		};
	}
	printf("%d",k);
	return 0;
}