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
    int n;
    int k=0;
    int c=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&(a[i]),&(b[i]));
        if((a[i]>=90)&&(a[i]<=140)&&(b[i]<=90)&&b[i]>=60)
        {
            c++;
        }
        else
        {
            if(c>k)
            {
                k=c;
            }
            c=0;
        }
    }
    if(c>k)
    {
    printf("%d\n",c);
    }
    else
    {
        printf("%d\n",k);
    }
    return 0;
}
