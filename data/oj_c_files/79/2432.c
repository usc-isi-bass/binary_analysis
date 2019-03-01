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



int  main()

{

int n, m, i, s=0,a=1;
while(1)
{

cin>>n>>m;
if((n+m)==0)
    break;
if(n>=2)

{for (i=2; i<=n; i++)
    s=(s+m)%i;


cout<<s+1<<endl;
s=0;
}
if (n==1)
cout<<a<<endl;


}
return 0;
}

