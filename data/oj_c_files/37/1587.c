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
	int t,i,a,j,k,b,s[100000];
	char zf[100000];
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		b=1;
		memset(zf,0,sizeof(zf));
		scanf("%s",zf); 
		getchar();
		a=strlen(zf);
		for(j=0;j<a;j++){
			s[j]=0;
		}
		for(j=0;j<a;j++){
			for(k=0;k<a;k++){
				if(zf[j]==zf[k]){
					s[j]++;
				}
			}
		}
		for(j=0;j<a;j++){
			if(s[j]==1){
				b=2;
				printf("%c\n",zf[j]);
				break;
			}
		}
		if(b==1){
			printf("no\n");
		}
	}
	return 0;
}
