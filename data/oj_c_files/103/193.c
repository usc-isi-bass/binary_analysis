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
char c[10000],a;
int i,n;
scanf("%s",c);
a=c[0];
n=1;
if(c[1]=='\0')
{
              if(a-'a'>=0)
              printf("(%c,1)",a-'a'+'A');
              else
              printf("(%c,1)",a);
}
else
{
for(i=1;c[i]!='\0';i++)
      {
                       if((c[i]==a)||(c[i]-'a'+'A'==a)||(c[i]+'a'-'A'==a))
                       {
                                                                         n=n+1;
                                                                         if(c[i+1]=='\0')
                                                                         {
                                                                                         if(a-'a'>=0)
                                                                                         printf("(%c,%d)",a-'a'+'A',n);
                                                                                         else
                                                                                         printf("(%c,%d)",a,n);
                                                                                         }
                       }
                       else
                       {
                               if(a-'a'>=0)
                               printf("(%c,%d)",a-'a'+'A',n);
                               else 
                               printf("(%c,%d)",a,n);
                               n=1;
                               a=c[i];  
                       if(c[i+1]=='\0')
                       {
                        if(a-'a'>=0)
                        printf("(%c,1)",c[i]-'a'+'A');
                        else
                        printf("(%c,1)",c[i]);
                       }
                       }
}
}
      getchar();
      getchar();
}
