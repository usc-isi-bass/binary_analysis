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
      char c[100],v[100];
      int a,b,d,e,i,m;
      scanf("%s",c);
      if(c[1]=='\0')
      {
      printf("0\n");
      printf("%c\n",c[0]);
      }
      else            
      if((c[2]=='\0')&&(((c[0]-'0')*10+c[1]-'0')<=13))
      {
                  printf("0\n");
                  m=(c[0]-'0')*10+c[1]-'0'; 
                  printf("%d\n",m);
      }
      else
      if(((c[0]-'0')*10+c[1]-'0')>=13)
      {
      a=((c[0]-'0')*10+c[1]-'0')%13;
      b=((c[0]-'0')*10+c[1]-'0')/13;
      v[0]=b+'0';
      for(i=2;c[i]!='\0';i++)
      {
                  d=(a*10+c[i]-'0')%13;
                  b=(a*10+c[i]-'0')/13;
                  a=d;
                  v[i-1]=b+'0';
      }
      v[i-1]='\0';
      printf("%s\n",v);
      printf("%d\n",a);
      }
      else
      if(c[3]=='\0')
      {
      d=((c[0]-'0')*100+(c[1]-'0')*10+c[2]-'0')/13;
      e=((c[0]-'0')*100+(c[1]-'0')*10+c[2]-'0')%13;
      printf("%d\n",d);
      printf("%d\n",e);
      }
      else
      {
          d=((c[0]-'0')*100+(c[1]-'0')*10+c[2]-'0')/13;
          e=((c[0]-'0')*100+(c[1]-'0')*10+c[2]-'0')%13;
          for(i=3;c[i]!='\0';i++)
          {
                            v[i-3]=d+'0';
                            c[i-2]=e+'0';
                            e=((c[i-2]-'0')*10+c[i]-'0')%13;
                            d=((c[i-2]-'0')*10+c[i]-'0')/13;
                            c[i-1]=e+'0';
                            v[i-2]=d+'0';
          }
          v[i-2]='\0';
          printf("%s\n",v);
          printf("%d\n",e);
      }
      getchar();
      getchar();
      }