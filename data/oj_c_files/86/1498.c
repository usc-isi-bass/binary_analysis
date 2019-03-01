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
	int n,m,k,i,c,d,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		c=0;
		for(d=0;d<m;d++){
			scanf("%d",&k);
			if(c+k<60)
				if(c+k+3<60)
					c+=3;
				else
					c=60-k;
		}	
	a[i]=60-c;
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0; 
}
