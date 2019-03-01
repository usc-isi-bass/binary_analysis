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
 int n,m,i,j,f,e,d,k;
 int q[10000],p[10000];
 e=0;
 k=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
	 scanf("%d %d",&q[i],&p[i]);
	 if(q[i]<=140&&q[i]>=90&&p[i]>=60&&p[i]<=90)e++;
	 else e=0;
	 if(k<e)k=e;
 }



printf("%d",k);


 return 0;
}

