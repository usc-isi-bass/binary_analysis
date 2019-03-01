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
      int a=0,b=0,n,i,j,k;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%d %d",&j,&k);
                       switch(j-k){
                       case 1:b++;break;
                        case -1:a++;break;
                         case 0: break;
                         case 2: a++;break;
                         case -2:b++;break;}
      }
      if(a>b)
      printf("A");
       if(a==b)
      printf("Tie");
       if(a<b)
      printf("B");
      }