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
	int i,j;
	int n;
	char A='A',T='T',C='C',G='G';
	char s[MAX+1];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		for(j=0;s[j];j++){
			switch (s[j]){
			case'A':s[j]=T;break;
			case'T':s[j]=A;break;
			case'C':s[j]=G;break;
			case'G':s[j]=C;break;
			}
		}
		printf("%s\n",s);
	}
	return 0;
}


