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
         char p[50];
         int n,i=1;
         int l;

         scanf("%d",&n);
         while(i<n+1)
                    {


                                   scanf("%s",p);

                                   l=strlen(p)-1;

                                   if(p[l]=='y')
                                   p[l]=p[l-1]='\0';

                                   if(p[l]=='r')
                                   p[l]=p[l-1]='\0';

                                   if(p[l]=='g')
                                   p[l]=p[l-1]=p[l-2]='\0';

                          printf("%s\n",p);
                          i++;
                     }
         return 0;
         }
