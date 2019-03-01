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
    int h[25],n,i,j,t,d[25]={0},max=0,in;  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        scanf("%d",&h[i]);  
    } 
    for(i=n-2;i>=0;i--)  
    {  
        for(j=i+1;j<n;j++)  
        {  
            if(h[j]<=h[i]&&d[i]<d[j]+1)   
                d[i]=d[j]+1;   
        }  
    }  
    for(i=0;i<n;i++)  
    {  
        if(d[i]>max)  
        {  
            max=d[i];  
        }  
    }  
    printf("%d",max+1);  
} 