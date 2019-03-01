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
{int n,sum=0;
cin>>n;
for(;n>0;n--)
{if(n%7==0||n%10==7||(n/10)%10==7) continue;
sum+=n*n;
}
cout<<sum<<endl;



return 0;
}