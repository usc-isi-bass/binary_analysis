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
    int s[300],b[300],i,n,j,m,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    for(i=0;i<n;i++){
        for(j=0,m=0;j<i;j++){
           if(s[i]==s[j])
              m++;
        }
        if(m==0){
           b[k]=s[i];
           k++;
        }
    }
    for(i=0;i<k-1;i++){
        printf("%d,",b[i]);
    }
    printf("%d",b[k-1]);
    return 0;
}
