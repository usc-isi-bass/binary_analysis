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
      int n;
      scanf("%d",&n); 
      int *p;
      p=(int*)calloc(n,sizeof(int));


      int j,k;
      for(;;)
      {
              scanf("%d%d",&j,&k);
              if(j==0&&k==0)
              break;
              *(p+j)=-1;
              if(*(p+k)!=-1)
              *(p+k)=*(p+k)+1;
      }
      
      int count=0;
      for(int i=0;i<n-1;i++)
      {
              if(*(p+i)==n-1)
              {
                             printf("%d",i);
                             count=1;
              }
      }
      if(count==0)
      printf("NOT FOUND");
      free(p);
}
