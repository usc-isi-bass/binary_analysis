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
	int n,i,len,zzz,m;
	scanf("%d",&n);
	char a[30];
	for(i=0;i<n;i++){
		scanf("%s",a);
		len=strlen(a);
		if(a[len-1]=='g')  zzz=len-4;
		else  zzz=len-3;
		for(m=0;m<=zzz;m++) printf("%c",a[m]);
		printf("\n");
	}

	return 0;
}