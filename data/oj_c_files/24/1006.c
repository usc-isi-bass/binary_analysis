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
	int s=0,i,j=0,n=0,a=0,b=0,x=0,y=0,sz[1000];
	char z[1000],f[1000][100];
	gets(z);
	s=strlen(z);
	for(i=0;i<=s;i++){
		if(z[i]==' '||z[i]=='\0'){
			f[n][j]='\0';
			n++;
			j=0;
			continue;
		}
		f[n][j]=z[i];
	    j++;
	}
	f[n][j]='\0';

	for(i=0;i<=n;i++){
		sz[i]=strlen(f[i]);
	}
	a=sz[0];
	b=sz[0];
	for(i=0;i<n;i++){
		if(a<sz[i]){
			a=sz[i];
			x=i;
		}
		if(b>sz[i]){
			b=sz[i];
			y=i;
		}
	}
	printf("%s\n",f[x]);
	printf("%s\n",f[y]);
	return 0;
}