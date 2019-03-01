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
      int n,i,j,k;
      char a[90];
      scanf("%d",&n);
      char s[2];
      gets(s);
      for(i=0;i<n;i++)
      {
                      gets(a);
                       j=strlen(a);
                       for(k=0;k<j;k++)
                       {
                                       if(k==0)
                                       {
                                              if(a[k]=='_' || (a[k]>='a'&& a[k]<='z') || (a[k]>='A' && a[k]<='Z'))
                                              continue;
                                              else 
                                              {
                                                   printf("0\n");
                                                   break;
                                              }
                                       }
                                       else{
                                            if(a[k]=='_' || (a[k]>='a'&&a[0]<='z') || (a[k]>='A' && a[k]<='Z') || (a[k]>='0'&&a[k]<='9'))
                                            continue;
                                            else
                                            {
                                                printf("0\n");
                                                break;
                                            }
                                            }
                                       
                       }
                       if(k==j)
                       printf("1\n");
      }
      getchar();
      getchar();
}