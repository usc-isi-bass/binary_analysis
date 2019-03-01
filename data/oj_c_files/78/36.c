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
      int z,q,s,l;
      for(l=5;l>=4;l--)
      {
                       for(q=l-1;q>=3;q--)
                       {
                                          for(z=q-1;z>=2;z--)
                                          {
                                                             for(s=z-1;s>=1;s--)
                                                             {
                                                                                if(z+q==s+l&&z+l>s+q&&z+s<q)
                                                                                {
                                                                                                            printf("l ");
                                                                                                            printf("%d\n",l*10);
                                                                                                            printf("q ");
                                                                                                            printf("%d\n",q*10);
                                                                                                            printf("z ");
                                                                                                            printf("%d\n",z*10);
                                                                                                            printf("s ");
                                                                                                            printf("%d\n",s*10);
                                                                                }
                                                             }
                                          }
                       }
      }
      getchar();
      getchar();
}
