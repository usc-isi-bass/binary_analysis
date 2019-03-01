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
	char word[120];
	int n,t,i,j,k,start,end;
	gets(word);
	n=strlen(word);
	start=0;
	t=0;
	for(i=0;word[i]!=' ';i++){
	}
	end=i-1;
	for(j=i+1;j<n;j++){
		if(j+end<=n-1){
			t=0;
			for(k=0;k<=end;k++){
				if(word[j+k]==word[k]){
					t=t+1;
				}
			}
			if(t==end+1){
				printf("%d",j-i-1);
				break;
			}
		}
	}
	return 0;
}