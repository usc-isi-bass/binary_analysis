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

struct pat
{
   char id[10];
   int  age;
       }pat[100];
main()
{
      int n,a[200],j,i;
      scanf("%d",&n);
      for(j=0;j<150;j++) a[j]=0;
      for( i=0;i<n;i++)
       {
              scanf("%s %d",pat[i].id,&pat[i].age);
              for(j=1;j<150;j++)
              {
                      if(j==pat[i].age) a[j]++;
                      }
              }
       for(j=150;j>=60;j--)
        { 
             if(a[j]==0)   continue;          
          for(i=0;i<n;i++)
        {
                          if(j==pat[i].age)  printf("%s\n",pat[i].id);
                }
                }  
               for(i=0;i<n;i++)
                         if(pat[i].age<60) printf("%s\n",pat[i].id);
                getchar();
                getchar();
                }