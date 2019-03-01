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
{int m,n,k,sum=0,a;
int i,j,q,b[100];
int s[100][100];
scanf("%d",&k);


for(q=1;q<=k;q++)
{scanf("%d%d",&m,&n);
for(i=1;i<=m;i++)
{for(j=1;j<=n;j++)
{scanf("%d",&s[i][j]);}
}
for(j=1;j<=n;j++)
{sum+=s[1][j];
sum+=s[m][j];
}
for(i=1;i<=m;i++)
{sum+=s[i][1];
sum+=s[i][n];
}
a=s[1][1]+s[1][n]+s[m][1]+s[m][n];
sum-=a;
b[q]=sum;
sum=0;
}
for(q=1;q<=k;q++)
{printf("%d\n",b[q]);}
return 0;
}
