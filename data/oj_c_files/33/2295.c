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
	int n,i;
	char base[256];
	scanf("%d",&n);
	while(n!=0){
		scanf("%s",base);
		for(i=0;base[i]!='\0';i++){
			if(base[i]=='A')base[i]='T';
			else if(base[i]=='T')base[i]='A';
			else if(base[i]=='C')base[i]='G';
			else if(base[i]=='G')base[i]='C';
		}
		n--;
		printf("%s\n",base);
	}
	return 0;
}