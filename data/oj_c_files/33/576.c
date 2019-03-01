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
	char s[300];
	int n;
    scanf("%d",&n);
	for(int i=0;i<n;i++){
	    scanf("%s",s);
		for(int m=0;m<strlen(s);m++){
			if(s[m]=='A'){s[m]='T';}
            else if(s[m]=='T'){s[m]='A';}
            else if(s[m]=='C'){s[m]='G';}
            else if(s[m]=='G'){s[m]='C';}
		}
        puts(s);
	}
	return 0;
}