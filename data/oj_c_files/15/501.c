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

int  main()
{int n,i,j,a[500][500],x=0,y=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
 }

for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(a[i][j]==0)
    x++;
  }
  if(x!=0)
   break;
 }
    for(j=0;j<n;j++)
 {
  for(i=0;i<n;i++)
  {
   if(a[i][j]==0)
    y++;
  }
  if(y!=0)
   break;
 }
 printf("%d\n",(x-2)*(y-2));


return 0;


}