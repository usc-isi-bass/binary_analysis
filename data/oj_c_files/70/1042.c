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

main()
{
 int i,j,n; double ss,max;
 double spot[100][2];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%lf%lf",&spot[i][0],&spot[i][1]);
 }
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
 {
  ss=sqrt((spot[i][0]-spot[j][0])*(spot[i][0]-spot[j][0])+(spot[i][1]-spot[j][1])*(spot[i][1]-spot[j][1]));
  if(max<=ss)
  max=ss;
 }
 printf("%.4lf",max);
}
