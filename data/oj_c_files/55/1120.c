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
      long a,b,l,k,i,j,ten,goal,t;
      char s[1000];
      char s3;
      long s2[1000];
      
      scanf("%d %s %d",&a,s,&b);
      ten=0; goal=0;
      l=strlen(s);
      l--;k=1;
      for (i=l;i>=0;i--)
      {
          if (s[i]>='0' && s[i]<='9')
          {
               ten+=(s[i]-'0')*k;                        
          }
          else if (s[i]>='a' && s[i]<='z')
          {
               ten+=(s[i]-'a'+10)*k;  
          }
          else if (s[i]>='A' && s[i]<='Z')
          {
               ten+=(s[i]-'A'+10)*k;          
          }
            
          k*=a;
      }
      t=0;
      if (ten==0) 
          printf("%d",ten);
      while (ten>0)
      {
            
            k=ten%b;
            s2[t]=k;
            ten=ten/b;
            t++;  
      }
      t--;
      for (i=t;i>=0;i--)
      {
          if (s2[i]<10)
              printf("%d",s2[i]);
          else
          {
              s3=s2[i]-10+'A';
              printf("%c",s3);
          }          
      }
     
      getchar();
      getchar();
      getchar();
}
