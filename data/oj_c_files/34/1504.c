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

int step(int n)
{if(n==1) printf("End\n");
else 
{if(n%2==1)
printf("%d*3+1=%d\n",n,3*n+1);
else printf("%d/2=%d\n",n,n/2);
}
return 0;
}

int jiaogu(int n)
{if(n==1) printf("End");
else 
{step(n); 
if(n%2==1)jiaogu(3*n+1);
else jiaogu(n/2);
}
return 0;
}

int main()
{int n;
scanf("%d",&n);
jiaogu(n);
return 0;
}