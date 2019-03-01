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
char dz[N];
int n,l,t=0,i=0;
scanf("%d",&n);
for(int j=0;j<n;j++)
{
scanf("%s",&dz);
t=0;

 if((dz[0]>='a'&&dz[0]<='z')||(dz[0]>='A'&&dz[0]<='Z')||(dz[0]=='_'))
{

l=strlen(dz);

for(i=1;i<l;i++)
{
if((dz[i]>='a'&&dz[i]<='z')||(dz[i]>='A'&&dz[i]<='Z')||(dz[i]>='0'&&dz[i]<='9')||(dz[i]=='_')){continue;}
else{t=t+1;}
}
if(t==0){
    printf("yes\n");
    
}
else{printf("no\n");}
}
else{printf("no\n");}}
return 0;
}


