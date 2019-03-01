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

double dis(double x1,double y1,double x2,double y2){
       return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
       }
int main(){
    int n,i,j;
    double x[100],y[100],ans;
    scanf("%d",&n);
    ans=0.0;
    for(i=1;i<=n;i++)scanf("%lf %lf",&x[i],&y[i]);
    for(i=1;i<=n;i++)
      for(j=i+1;j<=n;j++){
                          if(dis(x[i],y[i],x[j],y[j])>ans)ans=dis(x[i],y[i],x[j],y[j]);
                          }
    printf("%.4lf",ans);
    return 0;
    }
