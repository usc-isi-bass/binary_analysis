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
	int n ,i, j, p, q;
	double k[100][10];
	double t, e;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%lf", &k[i][0]);
        for(j = 1; j <= k[i][0]; j++){
		     scanf("%lf", &k[i][j]);
        }
	}
     for(p = 0; p < n; p++){
		 for(q = 1; q <= k[p][0]; q++){
			 t = 0;
			 t += (k[p][q] + 3 * q);
			 if(t == 61 || t == 62 || t == 63){
				
				 printf("%g\n", k[p][q]);
				 break;
			 }
			 else if(t >= 64){
				 e = 63 - q * 3;
				 printf("%g\n", e);
				 break;
			 }
		 }
		 if(t <= 60){
			printf("%g\n",(60 - 3 * k[p][0]));	
		}
	 }
	return 0;
}