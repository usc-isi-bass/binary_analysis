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

void a(int t)
{if(t<0)
{cout<<'-';
t=-t;}
if(t>0)
{cout<<t%10;
a(t/10);}
     }
int main()
{int t[6];
int i;
for(i=0;i<6;i++)
{
cin>>t[i];
while(t[i]%10==0)
{t[i]=t[i]/10;}
a(t[i]);
cout<<endl;
}
return 0;
    }
