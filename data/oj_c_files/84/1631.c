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
{int i,m,n,k,j;
 scanf("%d",&n);
 int *p=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
  scanf("%d",&p[i]);
 for(i=0;i<(n-1);i++)
  for(j=i+1;j<n;j++)
  { if(p[i]<p[j]) {k=p[i];p[i]=p[j];p[j]=k;}}
 printf("%d\n%d",p[0],p[1]);

}
