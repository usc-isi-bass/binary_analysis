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
      long int a[100000],b,c,m,n,i,t,j,e=0,p;
      scanf("%d",&n);p=n;
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      scanf("%d",&m);
      for(c=0;c<n;c++)
      {if(a[c]==m)e++;}
      
      for(c=0;c<=e;c++)
      {for(i=0;i<n-1;i++)
      {if(a[i]==m) 
           {a[i]=a[i+1];a[i+1]=m;}
      }}
      if(n-e-1>0)
      {for(i=0;i<n-e-1;i++)
      {printf("%d ",a[i]);}printf("%d",a[n-e-1]);}
      if(n-e-1==0)printf("%d",a[n-e-1]);
      getchar();getchar();getchar();
} 
