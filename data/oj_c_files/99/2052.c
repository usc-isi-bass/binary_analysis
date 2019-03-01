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
	int i,n,a;
	double sum1=0,sum2=0,sum3=0,sum4=0;
	scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
		if(a<=18&&a>=1)
           sum1++;
        else  if(a<=35&&a>=19)
		   sum2++;
        else if(a<=60&&a>=36)
		   sum3++;
        else if(a>=60)
		   sum4++;
	}
	sum1=(double)100*sum1/n;
    sum2=(double)100*sum2/n;
    sum3=(double)100*sum3/n;
    sum4=(double)100*sum4/n;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",sum1,sum2,sum3,sum4);
	return 0;
}