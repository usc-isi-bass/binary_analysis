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
{
int i ,s,n,m;
for(int j=1;j<=9999999;j++)
{
s=0;
cin>>n>>m;
if(n==0&&m==0)break;
for(i=2;i<=n;i++)
s=(s+m)%i;
cout<<s+1<<endl;
}
return 0;
}
