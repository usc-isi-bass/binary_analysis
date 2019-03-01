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
	int n;
	cin>>n;
	char z[256];
	gets(z);
	for (int j=0;j<n;j++) {
		gets(z);
		for (int i=0;z[i]!='\0';i++){
			if (z[i]=='A') z[i]='T';
			else if(z[i]=='T') z[i]='A';
			else if(z[i]=='G') z[i]='C';
			else if(z[i]=='C') z[i]='G';
		}	
		puts(z);
	}
	return 0;
}