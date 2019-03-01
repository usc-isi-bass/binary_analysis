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
	char sz[101]={0},*p,*p1,f[101]={0},*pf;
	int m;
	gets(sz);
	m=strlen(sz);
	p=sz,p1=p,pf=f;
	for(p1=p,pf=f;p1<sz+m,pf<f+m;p1++,pf++){
		if(p1<=sz+m-2){
			*pf=*p1+*(p1+1);
		}else{
			*pf=*p+*(p+m-1);
		}
	}
	printf("%s\n",f);
	return 0;
}
