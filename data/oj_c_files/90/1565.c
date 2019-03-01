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

int place(int a,int b)
{

    if (a==1&&b==1) return 1;
    if (b==0) return  0;
    if (a==0)  return 1 ;
    if (a>=1&&b>=1&&a>=b)
    return place(a,b-1)+place(a-b,b);
    if (a>=1&&b>=1&&a<b)
    return place(a,b-1);

}
int main()
{  
    int a,b,c,i,n;
    
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    scanf("%d %d",&a,&b);
    printf("%d\n",place(a,b));
    }
    
}
