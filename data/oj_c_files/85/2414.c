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
int n,i,j,m;
char z[21];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",z);
int k=0;
if((z[0]>='A'&&z[0]<='Z')||(z[0]>='a'&&z[0]<='z')||(z[0]=='_'))	{
for(j=1;z[j]!='\0';j++){
if(z[j]>='0'&&z[j]<='9')
k++;
else if(z[j]>='a'&&z[j]<='z')
k++;
   else	if(z[j]>='A'&&z[j]<='Z')
k++;
   else	if(z[j]=='_')
k++;
else break;
}
m=strlen(z);
if(k==m-1)
printf("yes\n");
else
printf("no\n");
}
else if(z[0]<='9'&&z[0]>='0')
printf("no\n");
else
printf("no\n");
}
return 0;
}