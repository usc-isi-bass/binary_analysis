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
      char a[150];
      char b [150];
      int i,l,c,d,e,f;
      scanf("%s",a);
      l=strlen(a);
      if (l>2)
      {
      if((a[0]-'0')*10+(a[1]-'0')>=13)
      {
              b[0]=((a[0]-'0')*10+(a[1]-'0'))/13+'0';
              c=(a[0]-'0')*10+(a[1]-'0');
              for(i=1;i<=l-2;i++)
              {
                   d=(b[i-1]-'0')*13;
                   c=(c-d)*10+(a[i+1]-'0');
                   b[i]=c/13+'0';
              }
      b[l-1]='\0';
      f=c-(b[l-2]-'0')*13; 
      printf("%s\n",b);
      printf("%d\n",f);
      }
      else
      {
          b[0]=((a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0'))/13+'0';
          c=(a[0]-'0')*100+(a[1]-'0')*10+(a[2]-'0');
          for(i=1;i<=l-3;i++)
          {
                    d=(b[i-1]-'0')*13;
                    c=(c-d)*10+(a[i+2]-'0');
                    b[i]=c/13+'0';        
          }
      b[l-2]='\0';
      f=c-(b[l-3]-'0')*13;
      printf("%s\n",b);
      printf("%d\n",f);
      }
      }
      else {if(l==2)
      {
          b[0]=((a[0]-'0')*10+(a[1]-'0'))/13+'0';
          b[1]='\0';
          f=((a[0]-'0')*10+(a[1]-'0'))%13;
          printf("%s\n",b);
          printf("%d\n",f);
          
      }
      else 
      {
          b[0]=(a[0]-'0')/13+'0';
          b[1]='\0';
          f=a[0]-'0';
          printf("%s\n",b);
          printf("%d\n",f);
      }
      }    
      getchar();
      getchar();
}
