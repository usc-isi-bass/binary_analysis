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
  int n;
  cin >> n;
  cin.get();
  int i=0;
  while(i<n)
  {
    i++;
    char a[100001];
    cin.getline(a,100001);
    int j,k,l;
    l=strlen(a);
    const int l1=l;
    int b[l1];
    for(j=0;j<l;j++)
    {
      b[j]=0;
    }
    for(j=0;j<l;j++)
    {
      for(k=0;k<l;k++)
      {
        if(a[j]==a[k])
        {
          b[j]++;
        }
      }
    }
    int t=0;
    for(j=0;j<l;j++)
    {
      if(b[j]==1)
      {
        cout << a[j] << endl;
        t++;
        break;
      }
    }
    if(t==0)
    {
      cout << "no" << endl;
    }
  }        
  cin.get();cin.get();cin.get();
  return 0;
}
