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


int main() {
	int n,k,sum=0;
    cin >> n;
    int shu[n];
    for(int i=0;i<n;i++)
    cin >> shu[i];
    cin >> k;
    for(int i=0;i<n;i++)
    {
      if(shu[i]==k)
      {
        sum=sum+1;
        for(int j=i;j<n;j++)
        {
          shu[j]=shu[j+1];
        }
        i=i-1;
      }
    }
    for(int i=0;i<n-sum;i++)
    {
      if(i==0)
      cout << shu[i];
      if(i>0)
      cout << " " <<shu[i];
    }
	return 0;
}
