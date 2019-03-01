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
    int n;
    scanf("%d",&n);
    int sum[100],eff[100];
    scanf("%d%d",&sum[0],&eff[0]);
    double result;
    result=(double)eff[0]/sum[0];
    double a[100];
    for(int i=1;i<n;i++){
     scanf("%d%d",&sum[i],&eff[i]);
     a[i]=(double)eff[i]/sum[i];
     if(a[i]>result){
       if((a[i]-result)>0.05)
       printf("better\n");
       else if((a[i]-result)<=0.05)
       printf("same\n");
       }
     else if(a[i]<result){
      if((result-a[i])>0.05)
       printf("worse\n");
      else if((result-a[i])<=0.05)
       printf("same\n");
     }
     else if(a[i]==result)
       printf("same\n");
    }
return 0;
}
         
       
     