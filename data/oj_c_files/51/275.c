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

void main()
{
int i,j,n,k=1,num[500];char text[501],s[500][6];
scanf("%d\n",&n);gets(text);
for(i=0;i<strlen(text)+1-n;i++)  
{num[i]=1;for(j=0;j<n;j++)   s[i][j]=text[i+j];s[i][n]='\0';}
for(i=0;i<strlen(text)+1-n;i++)  
{ for(j=i+1;j<strlen(text)+1-n;j++)   
   if(strcmp(s[i],s[j])==0)  {num[i]++;num[j]--;}}
for(i=0;i<strlen(text)+1-n;i++)  if(num[i]>k)  k=num[i];
if(k==1)    printf("NO");
else
{printf("%d\n",k);
for(i=0;i<strlen(text)-n;i++) {if(num[i]==k)  printf("%s\n",s[i]);}}
} 


