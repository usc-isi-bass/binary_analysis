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

main ()
{
     int a,b,c,d,i,j;
     char f[90];
     char g[20];
     scanf("%d",&a);
     gets(g);
     for(i=0;i<a;i++)
     {
                     gets(f);
                     if(f[0]=='_')
                     {
                                 d=0;
                                 for (j=1;j<90;j++)
                                 {
                                     if ((f[j]>='0' && f[j]<='9') || (f[j]>='a' && f[j]<='z')|| (f[j]>='A' && f[j] <='Z') || f[j]=='_');
                                     else if (f[j]=='\0')
                                     break;
                                     else
                                     {
                                          printf("0\n");
                                          d=1;
                                          break;
                                     }
                                     }
                     if (d==0)                    
                     printf("1\n");            
                     }
                     else if ((f[0]>='a' && f[0]<='z')|| (f[0]>='A' && f[0] <='Z'))
                     {
                                 d=0;
                                 for (j=1;j<90;j++)
                                 {
                                     if ((f[j]>='0' && f[j]<='9') || (f[j]>='a' && f[j]<='z')|| (f[j]>='A' && f[j] <='Z') || f[j]=='_');
                                     else if (f[j]=='\0')
                                     break;
                                     else
                                     {
                                          printf("0\n");
                                          d=1;
                                          break;
                                     }
                                     }
                     if (d==0)                    
                     printf("1\n");            
                     }
                     else 
                     printf("0\n");
     }
     getchar();
     getchar();
     getchar();
}
