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
  int n,i,j;
  cin>>n;

  double a[n],b[n];
  double distance[n][n];
  for(i=1;i<=n;i++)
{
   cin>>a[i];                
   cin>>b[i];          }
                   
                for(j=1;j<=n;j++)   
                  {
                     for(i=1;i<=n;i++)
                   {
                     distance[j][i]=sqrt((double)(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));               
                                    }
                                    }
                                    double longest=0.0;
                                    for(j=1;j<=n;j++)
                                    {  
                                       for(i=1;i<=n;i++)
                                      {
                                           if(distance[j][i]>longest) 
                                           longest=distance[j][i];               
                                                     }
                                                                              }
          printf("%.4f\n", longest);
     
return 0;
}