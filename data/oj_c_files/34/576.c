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

void fenjie(int n)
{
 if(n==1)
 {printf("End");
 return;}
 int m=0;
 if(n%2==0)
 {m=n>>1; printf("%d/2=%d\n",n,m);}
 else{m=3*n+1;printf("%d*3+1=%d\n",n,m);}
 fenjie(m);
}
int main()
{ 
int n;
cin>>n;
fenjie(n);

   return 0;
    
}