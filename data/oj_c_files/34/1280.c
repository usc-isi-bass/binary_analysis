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
{int n;
 cin>>n;
 for(;n!=1;)
 {for(;n%2==0;)
 {cout<<n<<"/2="<<n/2<<endl;
 n=n/2;}
 for(;n%2==1&&n!=1;)
 {cout<<n<<"*3+1="<<3*n+1<<endl;
 n=3*n+1;}
}
cout<<"End"<<endl;
return 0;
}