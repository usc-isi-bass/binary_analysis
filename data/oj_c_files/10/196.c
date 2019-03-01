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

const int MAXN=25+2;
int n;
int a[MAXN],f[MAXN];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)   
    	cin>>a[i];
    for(int i=0;i<n;i++)
      {
        f[i]=0;
        for(int j=0;j<i;j++)
          if(a[j]>=a[i]&&f[j]>f[i])
            f[i]=f[j];
        f[i]++;
      }
    int max=0;
    for(int i=0;i<n;i++)
      if(f[i]>max)   
    	  max=f[i];
    cout<<max<<endl;
    return 0;
}
    