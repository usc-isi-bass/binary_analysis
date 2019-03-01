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
	int n,m;
	cin>>n;
	char z[50];
	gets(z);
	for (int j=0;j<n;j++) {
		gets(z);
		m=strlen(z);
		if (z[m-1]=='r'||z[m-1]=='y') {
			z[m-1]=0;
			z[m-2]=0;
		}else {
			z[m-1]=0;
			z[m-2]=0;
			z[m-3]=0;
		}
		puts(z);
	}
	return 0;
}