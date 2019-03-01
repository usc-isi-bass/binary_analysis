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
    int n,i,t;
    scanf("%d\n",&n);
     for(i=0;i<n;i++)
    {
                    t=1;
                     char c[1000];
                     gets(c);
                    int l;
                    l=strlen(c);
                   if (c[0]>='0'&&c[0]<='9')
                    {
                        printf("0\n");
                    }
                    else
                    {
                      for(int j=0;j<l;j++)
                      {
                           if(c[j]!='_'&&(c[j]<'a'||c[j]>'z')&&(c[j]<'A'||c[j]>'Z')&&(c[j]<'0'||c[j]>'9'))
                           {
                                      printf("0\n");
                                      t=0;
                                      break;
                           }
                      }
                      if(t==1)
                      printf("1\n");
                    }
    //getchar();
    }
}