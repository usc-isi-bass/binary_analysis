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
	int n,i,j,g;
	float x,y,t=0;
	scanf("%d",&n);
	float a[100],b[100],c=0,d;
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&x,&y);
		a[i]=x;b[i]=y;
	}

		for(j=0;j<n;j++)
        {
		   for(g=0;g<n;g++)
            {
			d=sqrt((a[j]-a[g])*(a[j]-a[g])+(b[j]-b[g])*(b[j]-b[g]));
			if(d>c)
				c=d;
             }
         }

	printf("%.4f",c);
	return 0;
}
