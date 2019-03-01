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
	char s[50],w[50];
	int i,j,k,p=0,m;
	scanf("%s %s",s,w);
	for(i=0;w[i]!='\0';i++){
		if(w[i]==s[0]){
			for(k=i+1,j=1;s[j]!='\0';j++,k++){
				if(w[k]==s[j]){
					p=1;
					m=i;
				}
				else{
					break;
					p=0;
				}
			}
		}
		if(p==1){
			printf("%d",m);
			break;
		}
	}

	

	
	return 0;
}

