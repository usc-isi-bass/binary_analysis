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

int cmp( const void *a , const void *b )
{
return (*(float *)a) > (*(float *)b) ? 1 : -1;
}
main()
{
      int n,b=0,g=0;
      scanf("%d",&n);
      int i;
      char sex[8];
      float B[n],G[n];
      for(i=0;i<n;i++)
      {
                      scanf("%s",sex);
                      if(sex[0]=='m'){
                         scanf("%f",&B[b]);
                         b++;
                         }
                      else{
                        scanf("%f",&G[g]);
                        g++;}

      }
      qsort(B,b,sizeof(B[0]),cmp);
      qsort(G,g,sizeof(B[0]),cmp);
      for(i=0;i<b;i++)
      {
                      printf("%.2f ",B[i]);
                      }
      for(i=g-1;i>0;i--)
      {
                      printf("%.2f ",G[i]);}
      printf("%.2f\n",G[i]);
      }