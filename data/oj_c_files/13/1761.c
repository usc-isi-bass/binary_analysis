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
    int n,num,e[20001],i,j;
    scanf("%d/n",&n);
    if(n==1)
    {
           scanf("%d",&num);
           printf("%d",num);
    }else{ 
           for(i=1;i<=n;++i)
           {
                     scanf("%d",&num);
                     e[i]=num;
                     if(i==1)
                     {
                             printf("%d",e[1]);
                     }else{
                            for(j=1;j<i;j++)
                            {
                                      if(e[i]==e[j])
                                      {
                                         e[i]=0;
                                               break;
                                                    }
                                                    }
                                                    if(e[i]!=0)
                                                    {
                                                               printf(" %d",e[i]);
                                                               }
                                                               }
                                                               }
                                                               }
                                                               return 0;
                                                               }