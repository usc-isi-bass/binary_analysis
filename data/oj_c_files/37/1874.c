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
      int t[100000],i,j,k,q,count,mark;
      char a[100000];
      scanf("%d\n",&q);
      mark=0;
      for(i=0;i<q;i++)
      {
mark=0;
                      for(j=0;j<100000;j++)
                      {
                                           a[j]='\0';
                                           t[j]=0;
                      }
                      count=0;
                      gets(a);
                      for(j=0;j<100000;j++)
                      {
                                           if(a[j]=='\0')break;
                                           count++;
                      }
                      for(j=0;j<count;j++)
                      {
                                          for(k=0;k<count;k++)
                                          {
                                                              if(a[k]==a[j])t[j]++;
                                          }
                      }
                      for(j=0;j<count;j++)
                      {
                                          if(t[j]==1)
                                          {
                                                     printf("%c\n",a[j]);mark=1;break;
                                          }

                      }
                      if(mark==0)printf("no\n");
      }
      }