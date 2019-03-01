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

int main(){
	int sz[100][1], i, a, b,c, d, e, f, g;
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		i=0;
		while(1){
			a=a*3600;
			b=b*60;
			d=(d+12)*3600;
			e=e*60;
			sz[i][0]=d+e+f-a-b-c;
			scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
			if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
				break;
			}else{
				i++;
			}
		}
		for(g=0; g<=i; g++){
			printf("%d\n", sz[g][0]);
		}
		return 0;
}