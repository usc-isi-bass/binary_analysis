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
    int n,index,temp;
    int js=0,js1=0,i,j,k,p,q;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(k=0;k<=n-2;k++){
        index=k;
        for(p=k+1;p<n;p++){
            if(a[p]<a[index]){
                index=p;
            }
        }
        temp=a[k],a[k]=a[index],a[index]=temp;
    }
    for(q=0;q<n;q++){
        if(a[q]%2!=0)js=js+1;
    }
    for(j=0;j<n;j++){
        if(a[j]%2!=0&&js1<js){
            js1++;
            if(js1!=js)
            printf("%d,",a[j]);
            if(js1==js)
            printf("%d",a[j]);
        }    
    }
    return 0;
}

