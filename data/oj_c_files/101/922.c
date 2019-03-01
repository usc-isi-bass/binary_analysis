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
int a,b,c;
for(int i=0;i<3;i++){						//for?????????????// 
for(int j=0;j<3;j++){
for(int k=0;k<3;k++){
a=(j>i)+(i==k)==2-i;
b=(i>j)+(i>k)==2-j;
c=(k>j)+(j>i)==2-k;
if(a&&b&&c)									//???????????// 
{
int d[3]={i,j,k},p;
char f[3]={'A','B','C'},q;
for(int x=0;x<2;x++){
for(int y=0;y<2-x;y++){
if(d[y]>d[y+1]){
p=d[y];
d[y]=d[y+1];
d[y+1]=p;
q=f[y];
f[y]=f[y+1];								//??// 
f[y+1]=q;
}
}
}
cout<<f[0]<<f[1]<<f[2]; 				
}
}
}
}

return 0;
}
