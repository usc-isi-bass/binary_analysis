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
    int n,m=0,a[100001]={100000000}; 
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int t;           
        scanf("%d",&t);     
        int j=m;   
        while (a[j]<t) j--;         
        a[++j]=t;
        m=j>m?j:m;
    }
    printf("%d\n",m);
    getchar();
    getchar();
    return 0;
}
