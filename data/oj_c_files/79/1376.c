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

int ss(int a);
int main()
{
    int i=0,n,m,sum=0,count=0;
    int b[10000];
    for(i;;i++)
    {
        scanf("%d%d",&n,&m);
        if(n==0&&m==0){
            break;}
        int a[10000],p=0,j=0,k=0,number=0;
        for(j=0;j<n;j++)
        {
            a[j]=1;
        }
        while(number<n-1)
        {
            if(a[p]!=0)
            {
                k++;
                if(k==m)
                {
                    a[p]=0;
                    k=0;
                    number++;
                }
            }
            p=(p+1)%n;
        }
        for(j=0;j<n;j++)
        {
            if(a[j]!=0)
            {
                b[i]=j+1;
                count++;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        printf("%d",b[i]);
        if(i!=count-1)
        printf("\n");
    }    
   
    return 0;
}




