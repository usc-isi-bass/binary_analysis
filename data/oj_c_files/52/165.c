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
    int n,m;
	int i,j;
    scanf ("%d%d", &n, &m);
    int *p;
    p = (int *)malloc(sizeof(int) * (n+1));
	for (i=0; i<n; i++) {
	scanf ("%d",p+i);
	}
	m %= n;
	for (j=0; j<m; j++) {
    	for (i=n; i>0; i--) {
	      *(p+i)=*(p+i-1);
		}	
          *p=*(p+n);	      				
	}    
	for (i=0; i<n-1; i++) {
       printf ("%d ",*(p+i));
	}
	printf ("%d", *(p+n-1));
	free (p);
    return 0;
}