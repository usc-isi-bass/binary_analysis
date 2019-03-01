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
int n,i,t,k;
scanf("%d",&n);
char a[100][10],c[11];
int b[100];
for(i=0;i<n;i++){
scanf("%s %d",a[i],&b[i]);
if(b[i]<60){
 b[i]=0;
}
}
for(k=1;k<=n;k++){
for(i=0;i<n-k;i++){
 if(b[i]<b[i+1]){
   t=b[i];
   b[i]=b[i+1];
   b[i+1]=t;
   strcpy(c, a[i]);
   strcpy(a[i], a[i+1]);
   strcpy(a[i+1], c);
}
}
}
for(i=0;i<n;i++){
printf("%s\n",a[i]);
}
return 0;
}
