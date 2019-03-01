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
	int i,n,k;
    long s;
    cin>>n>>k;
    if(n==1) cout<<1;
    else if(n==2) cout<<7;
    else
	{         
      s=n;
      for(i=1;i<n;i++) s*=n;
      s-=k*(n-1);
      cout<<s;
	}
    return 0;
}