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
int n,i,j,k;
int s[300];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&s[i]);
}
for(i=1,k=1;i<n;i++){
for(j=0;j<k;j++){
if(s[j]==s[i]){
break;
}
}
if(j==k){
s[k]=s[i];
k++;
}
}
printf("%d",s[0]);
for(i=1;i<k;i++){
printf(",%d",s[i]);
}
return 0;
}

