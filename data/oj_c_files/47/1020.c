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
{int n,i,k;
i=0;
k=0;
scanf("%d",&n);
int w[n];
while(i<=n-1)
{i=n-1-i;
 scanf("%d",&(w[i]));
 i=n-1-i;
 i=i+1;
 }
 while(k<=n-1)
{ if(k==n-1)
{printf("%d",(w[k]));
}
else{
printf("%d ",(w[k]));
}
k=k+1;
}
return 0;
}

