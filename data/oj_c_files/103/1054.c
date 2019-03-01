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
    char a[1000];
    int b,c,d,f,g;
    int e[1000];
    for(g=0;g<1000;g++)
    e[g]=0;
    scanf("%s",a);
    c=strlen(a);
    for(b=0;b<c;b=b+e[b])
    {
    for(d=b;d<=c;d++)
    {
                       if(a[d]==a[b]||a[d]==(a[b]+32)||a[b]==(a[d]+32))
                       e[b]++;
                       else
                       break;
                       }
                       }
                       for(f=0;f<=c;f++)
                       {
                       if(e[f]!=0)
                       {
                                  if(a[f]>'Z')
                                  printf("(%c,%d)",a[f]-32,e[f]);
                                  else
                                  printf("(%c,%d)",a[f],e[f]);
                                  }
                                  }
                                  }