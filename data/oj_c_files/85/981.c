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
char sz[30];
int n,e;
scanf("%d",&n);
for(int i=0;i<n;i++){
   scanf("%s",sz);
   e=1;
   for(int j=0;j<strlen(sz);j++){
	   if((sz[j]=='_')||(sz[j]>='A'&&sz[j]<='Z')||(sz[j]>='a'&&sz[j]<='z')||(sz[j]>='0'&&sz[j]<='9'&&j>0)){
	     continue;
	   }
	   else{
	     e=0;
		 break;
	   }
   }
   if(e==0){
     printf("no\n");
   }
   else{
     printf("yes\n");
   }
}

return 0;
}