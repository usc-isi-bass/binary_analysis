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

main()
{
    int n,k,x=0,y=0;
    scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    for(int j=0;x+y!=n;j++)
    {
            if(a[j]==k)
            { 
                       for(int i=j;i<(n-x);i++)
                       {
                               a[i]=a[i+1];
                       }
                       x++;
                       j--;       
            }
            else
            y++;
    }
    printf("%d",a[0]);
    for(int i=1;i<(n-x);i++)
    printf(" %d",a[i]);
    getchar();
    getchar();
}
