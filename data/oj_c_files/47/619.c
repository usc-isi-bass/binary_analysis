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
    int i, j, n;
    int a[100];
    /* ???? */
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    /* ???? */
    for (i=0,j=n-1; i<j; i++,j--) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    /* ???? */
     for (i=0; i<n; i++){ 
               printf("%d", a[i]);
			   if(i!=n-1) printf(" ");
    }
            return 0;
}