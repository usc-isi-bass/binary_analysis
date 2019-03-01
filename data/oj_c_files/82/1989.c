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

int main()
{
int n,i,j,k,p,q,e,y;
int sz[1000][1000];
int sz2[100000];
scanf("%d",&n);
for(i=1;i<=n;i++){for(j=1;j<=2;j++){scanf("%d",&sz[i][j]);}}
k=0;
for(y=1;y<=n;y++){if(sz[y][1]>=90&&sz[y][1]<=140&&sz[y][2]>=60&&sz[y][2]<=90){sz2[y]=k+1;k++;}else{sz2[y]=0;k=0;}}
for(q=1;q<=n-1;q++){if(sz2[q]>=sz2[q+1]){e=sz2[q+1];sz2[q+1]=sz2[q];sz2[q]=e;}}
printf("%d",sz2[n]);
return 0;
}