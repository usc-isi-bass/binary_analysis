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

int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],i;
	int s=0,m=0,n=0;
	for(i=0;;i++){
     scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	 if(a[i]==0){break;}
	 m=a[i]*3600+b[i]*60+c[i];
	 n=(d[i]+12)*3600+e[i]*60+f[i];
     s=n-m;
	 printf("%d\n",s);
	}
return 0;
}
