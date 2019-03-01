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
	int a=0,i,n;
	char A[101];
	gets(A);
    for(i=0;A[i]!='\0';i++){
		if(A[i]!=' '){printf("%c",A[i]);}
		if(A[i]==' '){
		   printf(" ");
		   for(n=i;A[n]==' ';n++){
			   i=n;    } 
		}
		}
return 0;
}