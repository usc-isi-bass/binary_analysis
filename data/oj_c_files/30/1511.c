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
{double n,t,p,q,r,o,s;
cin>>n;
t=0;
s=0;
while(t<n)
{t=t+1;
p=fmod(t,7);
q=fmod(t,10);
o=t/10;
r=floor(o);

if (p==0||q==7||r==7)
s=s;
else s=s+t*t;}
cout<<s;
return 0;
}