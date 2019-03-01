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
char shen[1000],dc[100][100];
int n=0,k=0,len,i,len1;
gets(shen);
len=strlen(shen);
for(i=0;i<len;i++){
if(shen[i]!=' '){
dc[n][k]=shen[i];
k++;
}else{
dc[n][k]='\0';
n++;
k=0;
}
}
dc[n][k]='\0';
for(i=0;i<n+1;i++){
len1=strlen(dc[i]);
if(i!=n&&(len1>0)){
printf("%d,",len1);
}else if((i==n)&&(len1>0)){
printf("%d",len1);
}
}
return 0;
}
