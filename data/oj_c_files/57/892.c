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
int n;
scanf("%d",&n);
char str[100][100];
int i;
for(i=0;i<n;i++)
scanf("%s",str[i]);
for(i=0;i<n;i++)
{
if(str[i][strlen(str[i])-1]=='r'&&str[i][strlen(str[i])-2]=='e')
str[i][strlen(str[i])-2]='\0';
if(str[i][strlen(str[i])-1]=='y'&&str[i][strlen(str[i])-2]=='l')
str[i][strlen(str[i])-2]='\0';
if(str[i][strlen(str[i])-1]=='g'&&str[i][strlen(str[i])-2]=='n'&&str[i][strlen(str[i])-3]=='i')
str[i][strlen(str[i])-3]='\0';
}

for(int j=0;j<n;j++)
printf("%s\n",str[j]);

return 0;
}