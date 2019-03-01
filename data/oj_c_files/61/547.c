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

int main() {
	int n,a,i,p,q,result;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);

		if((a==1)||(a==2)){
			printf("1\n");
		}

		else{
			p=1;
			q=1;
			for(i=2;i<a;i++){
				result=p+q;
				p=q;
				q=result;
			}
			printf("%d\n",result);
		}

	}
	return 0; 
}