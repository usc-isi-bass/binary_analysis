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
	char a[60][40],b[40];
	int n,i,j,c;
	scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%s",a[i]);
		}
		for(j=0;j<n;j++){
			c=strlen(a[j]);
			if((a[j][c-1]=='r'&&a[j][c-2]=='e')||(a[j][c-1]=='y'&&a[j][c-2]=='l')){
				for(i=0;i<c-2;i++){
					b[i]=a[j][i];
				}
				b[i]='\0';
			}else{
				for(i=0;i<c-3;i++){
					b[i]=a[j][i];
				}
				b[i]='\0';
			}
			printf("%s\n",b);
		}
		return 0;
}
