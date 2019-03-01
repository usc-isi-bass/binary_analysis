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
	int n,sum=0;
    cin >> n;
    int shu[n];
    for(int i=0;i<n;i++)
    cin >> shu[i];
    for(int i=0;i<n;i++)
    {
      if(i==0)
      cout << shu[i];
      if(i>0)
      {
        for(int j=0;j<i;j++)
        {
          if(shu[i]==shu[j])//??????????????? 
          {
            shu[i]=0;//??????0???? 
          }
        }
        if(shu[i]!=0)
        cout << " " << shu[i];
      }
    }
	return 0;
}
