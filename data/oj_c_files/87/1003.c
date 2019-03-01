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

int time(int a,int b,int c,int d,int e,int f);
int main(){
int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],i=0,j;
while(1){
scanf("%d%d%d%d%d%d",&(a[i]),&(b[i]),&(c[i]),&(d[i]),&(e[i]),&(f[i]));
i++;
if(a[i-1]==0&&b[i-1]==0&&c[i-1]==0&&d[i-1]==0&&e[i-1]==0&&f[i-1]==0){
break;
}
}
for(j=0;j<i-1;j++){
printf("%d\n",time(a[j],b[j],c[j],d[j],e[j],f[j]));
}
return 0;
}

int time(int a,int b,int c,int d,int e,int f){
int total;
total=60-c+f+(59-b+e)*60+(d-a+11)*3600;
return total;
}