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
{int i,n,m,a[101];
 cin>>n>>m;
 for(i=1;i<=n;i++)
  cin>>a[i];
 for(int i=1;i<=m;i++)
 {int temp=a[n];
  for(int k=n;k>=2;k--)
    a[k]=a[k-1];
  a[1]=temp;
 }
 for(i=1;i<n;i++)
 cout<<a[i]<<' ';
 cout<<a[i];
 return 0;
}
 