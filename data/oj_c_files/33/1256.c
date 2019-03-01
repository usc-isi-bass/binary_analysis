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
char zfc[9999][256],jg[9999][256];
int n,l,i,j;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",&zfc[i]);
}
for(i=0;i<n;i++){
l=strlen(zfc[i]);
for(j=0;j<l;j++){
            if(zfc[i][j]=='A'){
				jg[i][j]='T';
			}
			else if(zfc[i][j]=='T'){
	            jg[i][j]='A';
			}
			else if(zfc[i][j]=='G'){
	            jg[i][j]='C';
			}
			else{
	            jg[i][j]='G';
}
                      jg[i][l]='\0';
		}
}
for(i=0;i<n;i++)
   printf("%s\n",jg[i]);

return 0;
}
