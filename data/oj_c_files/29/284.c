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
	int n,c[100],m;
	float t;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&c[i]);
	}
	for(int i=0;i<m;i++){
	        float s=0,a=2,b=1; 
			for(n=1;n<=c[i];n++){
		        s=s+(float)a/b;
		        t=a;a+=b;b=t;
			}	
		    printf("%.3f\n",s);
				
	}
	
	


	return 0;
}

