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
    int n=0,i=0;
	int minnum=60;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        int m;
	    scanf("%d",&m);
		int p=0;
		for(p=0;p<m;p++){
			int number;
			scanf("%d",&number);
			if((number+3*p)<=60){
				if((60-number-(3*p)-3)>=0)
					minnum=60-(3*p)-3;
				else if((60-number-(3*p)-3)<0)		
                    minnum=number;
			}
		}
		printf("\n%d\n",minnum);
	}
	return 0;
}