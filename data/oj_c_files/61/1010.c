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
{int a[20];
int n;
cin>>n;
int f[21];
  f[1]=1;
  f[2]=1;

       for(int j=3;j<=20;j++)
    	   f[j]=f[j-1]+f[j-2];
       for(int i=0;i<n;i++)
           	   cin>>a[i];

       for(int i=0;i<n;i++)
cout<<f[a[i]]<<endl;
	return 0;

}
