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
    int n,i;
	
	float c,d;
	int a,b;
   
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	c=(float)b/a;
	scanf("%d%d",&a,&b);
		d=(float)b/a;
		if(d-c>0.05) printf("\nbetter");
		else if (c-d>0.05) printf("\nworse");
		else printf("\nsame");

    for (i=2;i<n;i++){
		scanf("%d%d",&a,&b);
		d=(float)b/a;
		if(d-c>0.05) printf("\nbetter");
		else if (c-d>0.05) printf("\nworse");
		else printf("\nsame");

		}


	return 0;
}


