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


	int sum=0;
	int m,i,n;

	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		m=i/10;
			if(i%7==0)
				continue;
			if(i%10==7)
				continue;
			if(m%10==7)
				continue;
			if(m%10!=7||i%10!=7||i%7!=0)
				sum+=i*i;
	}
		
		printf("%d",sum);
		return 0;
}

