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
int i,j,n;
int a[100]={0};
char s[21];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",s);
if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||(s[0]=='_')){
for(j=1;s[j]!='\0';j++){
if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]=='_')||(s[j]>='0'&&s[j]<='9')) a[i]=1;
else{
a[i]=0;
break;}}}}
for(i=0;i<n;i++){
if(a[i]==1) printf("yes\n");
else printf("no\n");}
return 0;
}
