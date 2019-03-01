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

int sz[100][100];
int i,j;
int n;
scanf("%d",&n);
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
  scanf("%d",&(sz[i][j]));
  }
}

int a,b,c;
int s=0;
for(i=0;i<n;i++){
  for(j=0;j<n;j++){
    if(sz[i][j]==0&&sz[i][j+1]==255){a=j;break;}
  }
  for(j=n-1;j>=0;j--){
    if(sz[i][j]==0&&sz[i][j-1]==255){b=j;break;}
  }
 
  if(a<b){c=b-a-1;}else{c=0;}
  
s=s+c;
}

printf("%d",s);

return 0;
}