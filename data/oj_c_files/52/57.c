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

int main(int argc, char* argv[])

{

         int n,m,i,j;

         scanf("%d%d",&n,&m);

         int * x=(int *)malloc(sizeof(int)*n);

         for(i=0;i<n;i++){

                   scanf("%d",x+i);

         }

         m = m % n;//???????

         int tmp;

         for(j = 0; j < m; j++)

         {

                   tmp=*(x+n-1);

                   for(i=n-1;i>0;i--)

                   {

                            *(x+i) = *(x+i-1);

                   }

                   *x=tmp;

         }

         for(i=0;i<n-1;i++){

                   printf("%d ",*(x+i));

         }

         printf("%d",*(x+i));

 

 

         free(x);

         return 0;

}