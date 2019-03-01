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
   int k,i,j,m;
    int x[20000]={0};
    scanf("%d",&k);
    for(i=0;i<=k-1;i++) scanf("%d",&x[i]);
     printf("%d",x[0]);
    for(i=0;i<=k-2;i++)
    {
                       for(j=i+1;j<=k-1;)
                       {
                                            if(x[i]==x[j])
                                            {
                                                          for(m=j+1;m<=k-1;m++) x[m-1]=x[m];
                                                          k--;
                                                          }  
                                                        else j++;            
                                            }
                       }
    for(i=1;i<=k-1;i++) printf(" %d",x[i]);
}