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
	char child[50],mother[50];
	scanf("%s",child);
	getchar();
	scanf("%s",mother);
	int l=strlen(child),ml=strlen(mother),isbreak,i,k;
	for(i=0;i+l<=ml;i++){
		isbreak=1;
		for(k=0;k<l;k++){
			if(child[k]!=mother[k+i]){
				isbreak=0;
				break;
			}
		}
		if(isbreak){
			printf("%d",i);
			return 0;
		}
	}
}
