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

void main()
{
     int n,i,j,x,y;
     char a[100],b[100],c[100],d;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%s %s",a,b);
 
      x=strlen(a);y=strlen(b);
      for(j=0;j<=(x/2)-1;j++)
        {d=a[j];a[j]=a[x-1-j];a[x-1-j]=d;}
      for(j=0;j<=(y/2)-1;j++)
        {d=b[j];b[j]=b[y-1-j];b[y-1-j]=d;}
  
      for(j=0;j<y;j++)
        {
          if(a[j]>=b[j]) c[j]=a[j]-b[j]+48;
          else {c[j]=a[j]+10-b[j]+48;a[j+1]=a[j+1]-1;}
        }
      for(j=y;j<x;j++) 
         c[j]=a[j];
      for(j=x;j<100;j++)
         c[j]=0;
      for(j=0;j<=(x/2)-1;j++)
        {d=c[j];c[j]=c[x-1-j];c[x-1-j]=d;}
      for(j=0;j<strlen(c);j++)
        if(c[j]!='0') break;
      for(;j<strlen(c);j++)
       printf("%c",c[j]);
      printf("\n");
     }
}
