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


void insert(int *ma,int tem)
{
if (tem>ma[0]){ ma[1]=ma[0];ma[0]=tem;}
else if (tem>ma[1]){ ma[1]=tem;}
}


int main()
{
int n,i;
int temp,max[2]={0,0};
scanf("%d",&n);
for (i=1;i<=n;i++){
     scanf("%d",&temp);
     if (temp>max[0]){ max[1]=max[0];max[0]=temp;}
     else if (temp>max[1]){ max[1]=temp;}
     }
 printf("%d\n%d",max[0],max[1]);
return 0;
}
