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
	int n,i,age[100];
	int a=0,b=0,c=0,d=0;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&age[i]);
	}
    for(i=0;i<n;i++){
  
		if (age[i]<=18)
			a=a+1;
		else if(age[i]<=35&&age[i]>=19)
			b=b+1;
        else if(age[i]<=60&&age[i]>=36)
			c=c+1;
        else if (age[i]>=61)
			d=d+1;
	}
	printf("\n1-18: %.2f%%",(double)a/n*100);
	printf("\n19-35: %.2f%%",(double)b/n*100);
	printf("\n36-60: %.2f%%",(double)c/n*100);
	printf("\n60??: %.2f%%",(double)d/n*100);
	return 0;
}