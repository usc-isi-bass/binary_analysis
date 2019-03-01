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
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int*num=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)scanf("%d",num+i);
    for(i=0;i<=n/2;i++)
        for(j=0;j<n;j++)
      {if(*(num+i)+*(num+j)==k)   {printf("yes\n");return 0;}
      else continue;}
      printf("no\n");
      return 0;


}
