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
 int i,a,b,n,flag=0,c[10100],d[10100];
 scanf("%d",&n);
 while (scanf("%d%d",&a,&b)==2)
 {
   if (a==0&&b==0)
     break;
   c[b]++;
   d[a]++;     
 }
 for (i=0;i<=n-1;i++)
 if (c[i]==n-1&&d[i]==0)
  {
    printf("%d",i);
    flag=1;                        
  }
 if (flag==0) 
   printf("NOT FOUND\n");
   getchar();
   getchar();
   getchar();
   getchar();
   return 0;    
}