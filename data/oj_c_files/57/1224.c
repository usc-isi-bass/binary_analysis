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
int n;
char sz[100][100];
scanf("%d",&n);
for(int i=0;i<n;i++){
 scanf("%s",sz[i]);
}

for(int i=0;i<n;i++){
 int len=strlen(sz[i]);
 if(sz[i][len-1]=='r'||sz[i][len-1]=='y'){
  sz[i][len-2]='\0';
 }else if(sz[i][len-1]=='g'){sz[i][len-3]='\0';}
}
for(int i=0;i<n;i++){
 printf("%s\n",sz[i]);
}
}