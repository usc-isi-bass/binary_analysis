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
      int s=0;
      j=i+2;
      scanf("%d",&n);
      for(i=1;i<=(n-2);i++)
      {
                           j=i+2;
                           if (i==1)
                           continue;
                           for(k=2;;k++)
                           {
                                        if((i%k==0)||(j%k==0))
                                        break;
                                        }
                                        if((k==i)&&(j%k!=0)&&(j%(k+1)!=0))
                                        {
                                        s=s+1;
                                      
                                                             printf("%d %d\n",i,j);
                                                             }
                                                             
                                                             }
                                                             if(s==0)
                                                             printf("empty");
                                                             
                                                         
                                                             
                                                             
                                                             }
      
