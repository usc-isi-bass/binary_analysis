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
                int x,y,c,d,e,i,j;
                int a[20],b[20];
                scanf("%d %d",&a[0],&b[0]);
                
                for(i=1;i<20;i++)
                {a[i]=a[i-1]/2;
                if(a[i]==1)
                break;}
                     for(i=1;i<20;i++)
                {b[i]=b[i-1]/2;
                if(a[i]==1)
                break;}
                e=0;
                  
                for(i=0;i<20;i++)
                {
                                 for(j=0;j<20;j++)
                                 {
                                                  if(b[j]==a[i])
                                                  {e=b[j];
                                                  break;}
                                                  }
                                                  if(e!=0)
                                                  break;
                                                  }
              printf("%d",e);
                            getchar();    getchar();    getchar();    getchar();
                 }
