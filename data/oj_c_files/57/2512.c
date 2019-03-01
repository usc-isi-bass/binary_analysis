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
	int i,j,k,l,n;
	char w[33];
	char t[33][33];
	gets(w);
	n=atoi(w);
	for(i=0;i<n;i++){
		gets(t[i]);
	}
	for(i=0;i<n;i++){
		l=strlen(t[i]);
		if(t[i][l-1]=='g'&&t[i][l-2]=='n'&&t[i][l-3]=='i'){
			t[i][l-3]='\0';
		}
		else if(t[i][l-1]=='r'&&t[i][l-2]=='e'){
			t[i][l-2]='\0';
		}
		else if(t[i][l-1]=='y'&&t[i][l-2]=='l'){
		    t[i][l-2]='\0';
		}
	}
	for(i=0;i<n;i++){
		puts(t[i]);
	}
	return 0;
}