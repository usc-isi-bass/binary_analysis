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
  int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],m,s[1000],i=1;
	scanf("%d%d%d%d%d%d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);

		while(a[i-1]!=0||b[i-1]!=0||c[i-1]!=0||d[i-1]!=0||e[i-1]!=0||f[i-1]!=0){

			scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
			i++;
		}
        m=i-1;

		for(i=0;i<m;i++){
		s[i]=(d[i]+12)*3600+e[i]*60+f[i]-a[i]*3600-b[i]*60-c[i];
			printf("%d\n",s[i]);
		}

return 0;
}