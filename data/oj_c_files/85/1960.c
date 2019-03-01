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

int main (){
char a[22];
int n,i,j,m;

scanf("%d",&n);
for(j=1;j<=n;j++)
{
	scanf("%s",&a);
m=strlen(a);
if(a[0]>='0'&&a[0]<='9')
{printf("no\n");
continue;}
for(i=0;i<=m;i++){
	if(i==m){
printf("yes\n");
break;}
	
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_')
continue;
else {
	printf("no\n");
	break;}


}}return 0;}