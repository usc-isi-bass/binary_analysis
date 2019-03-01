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
    int n,k;
    int a[1005];
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    int f=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(a[i]+a[j]==k)
            {
                f=1;
                break;
            }
            /*else
            {
                f=2;
                break;
            }*/
        }
    if(f==1)
		printf("yes\n");
    else
		printf("no\n");
    return 0;
}