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
    int n,i,s1[200],s2[200],a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&s1[i],&s2[i]);
        if((s1[i]-s2[i])==1)b++;
        else if((s2[i]-s1[i])==1)a++;
        else if(s2[i]>s1[i])b++;
        else if(s2[i]<s1[i])a++;  
    }
    if(a<b)printf("B");
    else if(a==b)printf("Tie");
    else if(a>b)printf("A");
    return 0;
}

