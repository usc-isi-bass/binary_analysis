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
  int i,j,k,l,m,n;
  char id[200][200];
  int age[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%s %d",id[i],&age[i]);
   }
   for(j=200;j>=60;j--)
   {
      for(i=0;i<n;i++)             
      { if(age[i]==j)
        printf("%s\n",id[i]);}
   }
   for(i=0;i<n;i++)
    if(age[i]<60)
     printf("%s\n",id[i]);
   getchar();
   getchar();
}
    
    