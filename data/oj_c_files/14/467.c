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
{   
	int n,i,y,s,z,x,a,b,c,ax,bx,cx;
    scanf("%d",&n);a=0;b=0;c=0;ax=0;bx=0;cx=0;
	for(i=1;i<=n;i++)
	{   
		
		scanf("%d %d %d",&x,&y,&s);
		z=y+s; 
		if(c>=z) continue;
		else if(b>=z) {c=z; cx=x;}
		else if(a>=z) {c=b;cx=bx; b=z; bx=x;}
		else {c=b; cx=bx; b=a; bx=ax; a=z;ax=x;}
    }
	printf("%d %d\n",ax,a);
	printf("%d %d\n",bx,b);
	printf("%d %d\n",cx,c);
}
