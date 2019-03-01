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
	int n,c;
	scanf("%d",&n);
	char sz[21];
	for(int i=0;i<n;i++){
		c=0;
		scanf("%s",sz);
		for(int j=0;sz[j];j++){
			if(!((sz[j]=='_')||
				(sz[j]>='A'&&sz[j]<='Z')||
				(sz[j]>='a'&&sz[j]<='z')||
				(sz[j]>='0'&&sz[j]<='9'&&j>0))){
				c++;
			}
		}
		if(c!=0){printf("no\n");}
		if(c==0){printf("yes\n");}
	}
	return 0;
}