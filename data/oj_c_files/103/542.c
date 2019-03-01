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
          char s[1050];
          char bj;
          int i,j,k,f,l;
          scanf("%s",s);
          l=strlen(s);
          f=0;
          for (i=0;i<l;i++)
                 if (f==0)
                       {
                           bj=s[i];
                           if (bj>=97)
                              bj=bj-32;
                           f=1;
                        }
                       else
                       {
                           if   ((s[i]==bj)||(s[i]-32==bj))
                                        f++;
                                        else
                                        {
                                            printf("(%c,%d)",bj,f);
                                            f=1;
                                             bj=s[i];
                                             if (bj>=97)
                                             bj=bj-32;
                                        }
                       }
          printf("(%c,%d)",bj,f);
}
                                            
                                        
                           