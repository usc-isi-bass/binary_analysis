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
{ int m,n,k,i,j,r,num;
  int a[500],b[300];

for(;;)
{scanf("%d %d",&n,&m);
 for(i=1;i<=n;i++)
 {a[i]=1;}
j=0;
k=0;
for(i=1;i<=n;i++)
{if(a[i]==1) {j=j+a[i];
if(j==m) {j=0;a[i]=0;k++;}
if(k==n) {num=i;printf("%d\n",num);break;}}
if(i==n) i=0;}

if(n==0&&m==0)
break;


}
return 0;
}