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
int n,i,j,p,w=0;
char a[100][100];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%s",a[i]);
p=strlen(a[i]);w=0;
for(j=0;j<=p-1;j++)
{
if(j==0&&a[i][j]<='9'&&a[i][j]>='0'){printf("no");w=1;break;}
if((a[i][j]<='9'&&a[i][j]>='0')||(a[i][j]<='Z'&&a[i][j]>='A')||(a[i][j]<='z'&&a[i][j]>='a')||a[i][j]=='_')
{

}
else {printf("no");w=1;break;}

}
if(w!=1)printf("yes");
if(i!=n)printf("\n");
}
}