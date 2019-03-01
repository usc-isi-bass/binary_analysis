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
	int i,j=1,t2,k,n,a,b=0;
	float t1;
	scanf("%d %d",&n,&k);
	do{
		t2=n*j+k;
		t1=(float)t2;
	   for(i=0;i<n-1;i++){
		   if(t1/(n-1)==t2/(n-1)){
			   a=k+n*t2/(n-1);
			   b++;
		   }
		   else {b=0;break;}
		   t2=a;
		   t1=(float)t2;
	   }	   
	   j++;
	}while(b<n-1);
	t2=(int)t1;
	printf("%d",t2);
	return 0;
}

