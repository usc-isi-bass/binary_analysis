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
  char str[50],s[50];
  int p,i,k,m,n,a[128],b[128];
  scanf("%s%s",s,str);
  m=strlen(s);
  n=strlen(str);
  if(m!=n)printf("NO");
  else
  {
     for(i=0;i<=127;i++)
     {a[i]=0;b[i]=0;}
     for(i=0;i<m;i++)
     {
        p=s[i];
        a[p]++;
      }
     for(i=0;i<m;i++)
     {
        p=str[i];
        b[p]++;
      } 
     k=0; 
     for(i=1;i<=127;i++)
     if(a[i]!=b[i]) k=1;
     if(k==0)printf("YES");
     else printf("NO");
  }
}

