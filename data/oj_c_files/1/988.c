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

int sum;
void f(int x,int min)
{ int p;
  if (x==1) sum++;
     else for (p=min;p<=x;p++)
               if (x%p==0) f(x/p,p);
     }
int main()
{ int n,i,j,k;
  cin>>n;
  for (i=1;i<=n;i++)
      {sum=0;
       cin>>k;
       for (j=2;j<=k;j++)
            if (k%j==0) f(k/j,j);
       cout<<sum<<endl;             
                    } 
 return 0; 
    }
