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
      char st[50],sub[30];
      int i,j,k,key;
      scanf("%s%s",sub,st);
            key=0;
      for (i=0;st[i]!='\0';i++)
      {
          for (j=i,k=0;sub[k]!='\0'&&st[j]==sub[k];j++,k++);
          if(sub[k]=='\0')
          {
                          printf("%d",i);
          key=1;
          break;
          }
          
          }return 0;
          }
          