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

main ()
{
     int n,i,j,k,a[100001];
     char s[100001];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          int x=0;
          for(j=0;j<100001;j++) {s[j]='\0';a[j]=1;}
          scanf("%s",s);
          for(j=0;j<100001;j++)
          {
               if(a[j]==1) for(k=j+1;k<100001;k++) if(s[j]==s[k]) {a[j]++;a[k]++;}
          }
          for(j=0;j<100001;j++) if(a[j]==1) {printf("%c\n",s[j]);x=1;break;}
          if(x==0) printf("no\n");
     }
    
}
   
