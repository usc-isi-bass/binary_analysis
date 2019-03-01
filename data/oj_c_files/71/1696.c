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
   
    int days[] = {   0, 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31    };
    int i, n, y, m, d,x1;

    scanf("%d", &n);
	for (i = 0; i < n; i++) {
        scanf("%d %d %d", &y, &m, &d);
        days[2] = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ? 29 : 28;
		if(m>d){
			x1=d;
			d=m;
			m=x1;
		}
			int j,sum=0;
			for(j=m;j<d;j++)
             sum+=days[j];
			 if(sum%7==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}