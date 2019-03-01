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
        int k,d,n,y[200],m1[200],m2[200],i,e,m[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
        scanf("%d",&n);
        for(i=0;i<n;i++){
                scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
        
        if(y[i]%100!=0&&y[i]%4==0||y[i]%400==0) m[2]=29;
        else m[2]=28;
        if(m1[i]>m2[i]){ e=m2[i];m2[i]=m1[i];m1[i]=e;}d=0;
        for(k=m1[i];k<m2[i];k++){
                 d+=m[k];
        }
        if(d%7==0) printf("YES\n");
        else       printf("NO\n");
        }
        return 0;
}