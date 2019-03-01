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
{int n,a,b,p,q;
scanf("%d%d%d",&n,&a,&b);
if(a>=b){p=a;q=b;}
else{p=b;q=a;}
for(int i=2;i<n;i++){
int m;
	scanf("%d",&m);
	if(m>=p){q=p;p=m;}
	else{if(m>=q){q=m;}}
}
printf("%d\n%d\n",p,q);
return 0;
}