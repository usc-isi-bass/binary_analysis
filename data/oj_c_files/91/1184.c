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
{char s[999];
int i,n,t,tt,ttt;
gets(s);
n=strlen(s);
for(i=1;i<=n;i++)
{if(i<n)
{t=s[i-1];
tt=s[i];
ttt=t+tt;
printf("%c",ttt);
}
if(i==n)
{t=s[i-1];
tt=s[0];
ttt=t+tt;
printf("%c",ttt);
}
}
return 0;
}