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

int a[100001];
int main()
{int n,samenum=0,t,d;
cin>>n;
for(int i=0;i<n;i++)
	cin>>a[i];
cin>>d;
for(int i=0;i<n;i++)
	{if(a[i]==d)
	  {samenum++;t=i;
	  do {a[t]=a[t+1];
          t++;}while(t<n);i--;
       }}
for(int j=0;j<n-samenum;j++)
{if(j<n-samenum-1) cout<<a[j]<<' ';
else cout<<a[j];
}
return 0;

}