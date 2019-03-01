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

void main(){
	int n,i,s[4]={0},age;
	double sj[4];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&age);
		if(age<19)
			s[0]++;
		if(age>18&&age<36)
			s[1]++;
		if(age>35&&age<61)
			s[2]++;
		if(age>60)
			s[3]++;
	}
	for(i=0;i<4;i++)
		sj[i]=100.000*s[i]/n;
    printf("1-18: %.2lf%%",sj[0]);
    printf("\n19-35: %.2lf%%",sj[1]);
    printf("\n36-60: %.2lf%%",sj[2]);
    printf("\n60??: %.2lf%%",sj[3]);
}

