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

int main (){
	int n,i,j;
	char s[MAX+1];
	scanf ("%d",&n);
	for (i=0;i<=n;i++){
		gets(s);
		for(j=0;s[j];j++){
			switch (s[j]){
			case'A':s[j]='T';break;
			case'T':s[j]='A';break;
			case'C':s[j]='G';break;
			case'G':s[j]='C';break;
			}
		}
		puts(s);
	}
	return 0;
	
}
