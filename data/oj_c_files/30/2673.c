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
int n,a[100],sum=0;//???????
cin>>n;//??n
for(int i=1;i<=n;i++)//??
	{a[i]=i;//???n????
if(a[i]%7==0||a[i]==17||a[i]==27||a[i]==37||a[i]==47||a[i]==57||a[i]==67||a[i]==87||a[i]==97||(a[i]-69>0&&a[i]-80<0))//?????7??
     a[i]=0;//??7??????0
sum=sum+a[i]*a[i];}//?????
cout<<sum<<endl;//?????
return 0;
}