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
    int i,n; 
    struct{
       int id,chi,math,sum;
    } s,s1,s2,s3;
    s1.sum=s2.sum=s3.sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&s.id,&s.chi,&s.math);
        s.sum=s.chi+s.math;
        if(s.sum>s1.sum)
        {
            s3=s2;s2=s1;s1=s;
        }
        else if(s.sum>s2.sum)
        {
             s3=s2,s2=s;
        }
        else if(s.sum>s3.sum)
        {
             s3=s;
        }
    }
    printf("%d %d\n%d %d\n%d %d\n",s1.id,s1.sum,s2.id,s2.sum,s3.id,s3.sum);
    getchar();
    getchar();
    getchar();
    return 0;
} 
                  
     
