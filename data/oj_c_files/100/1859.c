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

int main(int argc, char* argv[])
{
	int n,i,no=0;
	char zm[300],ch;
	scanf("%s",zm);
	n=strlen(zm);
    for(ch='A';ch<='Z';ch++){	int k=0;
		for(i=0;i<n;i++){
		
			if(zm[i]==ch){
		
			k++;
			}
		}
		if(k!=0){
		printf("%c=%d\n",ch,k);
		}
	}
	for(ch='a';ch<='z';ch++){	int k=0;
		for(i=0;i<n;i++){
		
			if(zm[i]==ch){
		
			k++;
			}
		}
		if(k!=0){
		printf("%c=%d\n",ch,k);
		no=1;
		}
	}
	if(no==0){printf("No");}
	return 0;
}