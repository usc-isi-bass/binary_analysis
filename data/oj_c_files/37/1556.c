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

int main()
{
    char check(char string[]);
    int t;
    scanf("%d", &t);
    int i;
    char v;
    char string[100][1000];
    for(i=1;i<=t;i++)
    {
                     scanf("%s", string[i]);
                     v=check(string[i]);
                     if(v=='+')
                     printf("no\n");
                     else
                     printf("%c\n", v);
    }
    return 0;
}

     char check(char string[])
     {
          int n;
          n=strlen(string);
          int k,j;
          int flag=0;
          int count=0;
          char m='+';
          for(k=0;k<n;k++)
          {
                          flag=0;
                          for(j=0;j<n;j++)
                          {
                                            if(string[k]==string[j]&&k!=j)
                                            {
                                                                    flag=1;
                                                                    break;
                                            }
                                            
                          }
                          if(flag==0)
                          {
                                     return(string[k]);
                                     count++;
                                     break;
                          }
                          
          }
          if(count==0)
                          {
                                      return(m);
                          }
          }
    
