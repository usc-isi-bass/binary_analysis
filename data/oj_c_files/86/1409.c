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
	int i,j,n,m,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a=0;
		if(m==0){
			printf("60\n");
			continue;
		}
		for(j=0;j<m;j++){
			scanf("%d",&a);
			if(a+j*3<57)
				continue;

			if(a+j*3<=63){
				printf("%d\n",a);
				break;
			}else{
				printf("%d\n",60-3*j);
				break;
			}
		}
		if(j == m)
			printf("%d\n",60-3*m);
	}
	return 0;
}
