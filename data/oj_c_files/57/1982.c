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
int n,l,i;
scanf("%d",&n);
char dc[50][50];

for(i=0;i<n;i++){
scanf("%s",dc[i]);
l=strlen(dc[i]);
if((dc[i][l-2]=='e')||(dc[i][l-2]=='l')){
dc[i][l-2]='\0';
printf("%s\n",dc[i]);
}
else if(dc[i][l-3]=='i'){
dc[i][l-3]='\0';
printf("%s\n",dc[i]);

}



}

return 0;
}