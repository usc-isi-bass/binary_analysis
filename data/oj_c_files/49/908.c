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

void main()
{char s[501];
int i,j,n,l,f; scanf("%s",s);l=strlen(s);
for(n=2;n<=l;n++)
{for(i=0;i<=l-n+1;i++)
{f=0;for(j=i;j<=(2*i-1+n)/2;j++){if(s[j]!=s[2*i-1+n-j]) {f=1;break;}}
if(f==1) continue;
else{for(j=i;j<=i-1+n;j++) printf("%c",s[j]);printf("\n");}
}
}
}
