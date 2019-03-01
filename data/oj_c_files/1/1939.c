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

int t;
int main()
{int n,i,a[100];
void fenjie(int x,int y);
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{t=0;
fenjie(2,a[i]);
printf("%d\n",t);
}
return 0;
}

void fenjie(int x,int y)
{int j;
if(y==1){
t++;
return;}
for(j=x;j<=y;j++)
{if(y%j==0)
fenjie(j,y/j);
}

}


