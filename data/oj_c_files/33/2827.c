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
int n,i,j,len;
char a[1000][256];
scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%s",a[i]);
  len=strlen(a[i]);
   for(j=0;j<len;j++){
	if(a[i][j]=='G'){a[i][j]='C';}
	else if(a[i][j]=='A'){a[i][j]='T';}
    else if(a[i][j]=='T'){a[i][j]='A';}
	else if(a[i][j]=='C'){a[i][j]='G';}
   }
}
for(i=0;i<n;i++){
	len=strlen(a[i]);
	for(j=0;j<len;j++){
		if(j==len-1){
			printf("%c\n",a[i][j]);
		}else{
    	printf("%c",a[i][j]);
		}
	}
}

return 0;
}
