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
      char a[301]={0};
      int i;
      for(i=1;i<=300;i++)
      {
                         scanf("%c",&a[i]);
                         if(a[i]=='\n') break;
      }
      int j;  int k;
      int s[256]={0};
      for(j='A';j<='Z';j++)
      {
                           for(k=1;k<=i;k++)
                           {
                                            if(a[k]==j) s[j]=s[j]+1;
                           }
                           if(s[j]>=1) printf("%c=%d\n",j,s[j]) ;
      }
      for(j='a';j<='z';j++)
      {
                           for(k=1;k<=i;k++)
                           {
                                            if(a[k]==j) s[j]=s[j]+1;
                           }
                           if(s[j]>=1) printf("%c=%d\n",j,s[j]) ;
      }
      int w,u;
      w=0;
      for(u=0;u<=255;u++)
      {
                         w=w+s[u];
      }
      if(w==0)  printf("No"); /*w??No???*/
                          
  



}
