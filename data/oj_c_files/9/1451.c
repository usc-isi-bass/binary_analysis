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
int n,i,j;
struct ren{
  char b[100];
  int c;

}a[100],d[100],m;
scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%s%d",a[i].b,&a[i].c);
   d[i]=a[i];

}
for(i=n-1;i>0;i--){
    for(j=0;j<i;j++){
if(d[j].c<d[j+1].c){
   m=d[j+1];
   d[j+1]=d[j];
   d[j]=m;

}

}

}
for(i=0;i<n;i++){
    if(d[i].c>=60){
  printf("%s\n",d[i].b);
}

}
for(i=0;i<n;i++){
    if(a[i].c<60){
   printf("%s\n",a[i].b);
}
}
return 0;
}

