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
    int n,a[50000],b[50000],i,j,A,B,e[20001];
           scanf("%d",&n);
           for (i=0;i<20001;i++)
          {
           e[i]=0;
           }
for(i=0;i<n;i++)
{
    scanf("%d%d",&a[i],&b[i]);
    for(j=2*a[i];j<=2*b[i];j++)
          e[j]=1;
}
for(A=0;e[A]==0;A++){}
for (B=20000;e[B]==0;B--){}
for (i=A;i<=B;i++){
        if(e[i]==0){
            printf("no");
            break;
        }
        if(i==B)
       printf("%d %d",A/2,B/2);}
return 0;
}
