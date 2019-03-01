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
    char a[1000],b;
    int n,j,l,i;
    gets(a);
    l=strlen(a);
    for (i=0;i<l;i++)
                      {
                          if (a[i]>='a'&&a[i]<='z')
                              a[i]=a[i]+'A'-'a';
                      }
   for (i=0 ;i<l;i++)
                          {j=1;b=a[i];
                           loop:  if(a[i]==a[i+1])
                                    {j++;
                                    i++;
                                     goto loop;
                                        }
                           else 
                         printf("(%c,%d)",b,j)  ;         
                           
                           }   
      getchar();
      getchar();
                            }