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

int F(int m)
{ 
if(m==1||m==2) return 1;
else 
{return F(m-1)+F(m-2);}
}

int main()
{int Z,a[23],i;
cin>>Z;
for(i=1;i<=Z;i++)
{cin>>a[i]; 
}
for(i=1;i<=Z;i++)
{cout<<F(a[i])<<endl;
                 }
 
 return 0;
}
