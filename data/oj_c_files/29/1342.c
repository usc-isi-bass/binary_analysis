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

double add(int n);
int main()
{
    int m;
    scanf("%d",&m);
    int *sz=(int*)malloc(sizeof(int)*m);
    int i;
    for(i=0;i<m;i++){
      scanf("%d",&sz[i]);
    }
    double a;    
    for(i=0;i<m;i++){
      a=add(sz[i]);
      printf("%.3lf\n",a);
    }
    return 0;
}
double add(int n){
	double b=2.0,a=1.0,c;
	double s=0;
	for( ;n>0;n--){
		s+=b/a;
		c=a;
	    a=b;  
        b=c+b;
	}
	return s;
}
