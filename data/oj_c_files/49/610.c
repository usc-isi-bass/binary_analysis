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

char b[505];
int check(){
	int i,len,j;
	len=strlen(b);
	for(i=0,j=len-1;i<j;i++,j--)
		if(b[i]!=b[j])return 0;
		return 1;
}
void main()
{
	char a[510];
	int i,j,k,len;
	gets(a);
	len=strlen(a);
	for(i=2;i<=len;i++){
		for(j=0;j<=len-i;j++){
			for(k=0;k<i;k++){
				b[k]=a[k+j];
			}
			b[k]=0;
			if(check())printf("%s\n",b);
		}
	}
}
