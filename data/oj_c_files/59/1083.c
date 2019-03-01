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
int m,n,i,j,k,a[111][111],s=0;
char b;
scanf("%d",&n);
scanf("\n");
for (i=1;i<=n;i++){
for (j=1;j<=n;j++){
scanf("%c",&b);
if (b=='.') a[i][j]=1;
if (b=='#') a[i][j]=0;
if (b=='@') a[i][j]=2;
}
scanf("\n");
}
scanf("%d",&m);
for (k=1;k<=m-1;k++){
    for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		  if (a[i][j]==2)
		  {
              if (a[i-1][j]!=0&&a[i-1][j]!=2) a[i-1][j]=3;
			  if (a[i+1][j]!=0&&a[i+1][j]!=2) a[i+1][j]=3;
			  if (a[i][j+1]!=0&&a[i][j+1]!=2) a[i][j+1]=3;
			  if (a[i][j-1]!=0&&a[i][j-1]!=2) a[i][j-1]=3;
		  }

for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		  if (a[i][j]==3) a[i][j]=2;
}
 for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		  if (a[i][j]==2) 
			  s=s+1;
		  printf("%d",s);


return 0;
}