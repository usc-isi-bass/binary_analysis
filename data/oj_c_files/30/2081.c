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
	int sum=0, n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i<7){
			sum+=i*i;
		} 
		else{ 
			if(i>=7&&i%7==0||i>10&&(i-7)%10==0||i>70&&(i%70)<=9){
			
			}
			else{
				sum+=i*i;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}




