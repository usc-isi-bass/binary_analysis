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
struct{
int a,b;
}sz[100];
int n,i,x=0,y=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d %d",&sz[i].a,&sz[i].b);
}
for(i=0;i<n;i++){
if(sz[i].a-sz[i].b==-1||sz[i].a-sz[i].b==2){x++;}
else if(sz[i].a-sz[i].b==1||sz[i].a-sz[i].b==-2){y++;}
else{continue;}
}
if(x>y){printf("A");}
else if(x==y){printf("Tie");}
else{printf("B");}
return 0;
}

