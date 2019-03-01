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




void invert(int ip[],int n)
{
    
    int i;
    int s=1;
    
    for(i=0;i<n;i++)
    {
        if(s==1){printf("%d",ip[n-1-i]);s=0;}
        else{printf(" %d",ip[n-1-i]);}
        
    }
    return;
    
}

int main() {

    int n;
    scanf("%d",&n);
    int ip[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&(ip[i]));
    }
    invert(ip,n);
    
    return 0;
}