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
    int a,b,c,d,e,f,l=0,i;
	int h,m,s,r;
	int z[100];
	

	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
          h=12-a+d;
		  m=-b+e;
		  s=-c+f;
		  r=3600*h+60*m+s;
		  z[l]=r;
          l++;
		  scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
          
	}
	for(i=0;i<l;i++){
		printf("%d\n",z[i]);
	}

    return 0;
}