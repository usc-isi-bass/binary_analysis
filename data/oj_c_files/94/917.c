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
    int n,t,num=-1,a[500];
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&t);
        if (t%2==1){num++;a[num]=t;}// choose odd number 
    }
    sort(a,a+num+1);//sort the numbers
    printf("%d",a[0]);
    for (int i=1;i<=num;i++) printf(",%d",a[i]);// print 

    return 0;
}
