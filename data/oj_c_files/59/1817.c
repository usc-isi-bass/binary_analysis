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
	char a[102][102],c[102][102];
	int n,i,j,m,t,r=0,x,y;
	memset (a,'@',sizeof a);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){ 
	  for(j=1;j<=n;j++){ 
	    scanf("%c\n",&a[i][j]);
	    c[i][j]=a[i][j];
	  }  
	} 
	scanf("%d\n",&m);
for(t=1;t<m;t++){
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++){
		if(c[i][j]=='@'){
			if(a[i-1][j]=='.') a[i-1][j]='@';
			if(a[i+1][j]=='.') a[i+1][j]='@';
			if(a[i][j-1]=='.') a[i][j-1]='@';
			if(a[i][j+1]=='.') a[i][j+1]='@';
		}
	}
	for(x=1;x<=n;x++)
	for(y=1;y<=n;y++)
	{c[x][y]=a[x][y];}
	} 
for(i=1;i<=n;i++)
for(j=1;j<=n;j++){
	if(a[i][j]=='@')
	r+=1;
}
printf("%d\n",r);
return 0; 
}