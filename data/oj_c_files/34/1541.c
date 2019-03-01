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
{int n,t=0,i;//????n,t,i,??t????0
cin>>n;
while(n!=1)
{if(n%2==0)
{i=n/2;
printf("%d/2=%d\n",n,i);}
else {i=n*3+1;
printf("%d*3+1=%d\n",n,i);}
n=i;
}
cout<<"End"<<endl;
return 0;
}