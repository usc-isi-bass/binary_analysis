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
int n,i,j=0;
char sen[100][100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%s",sen[i]);
}
for(i=0;i<n;i++)
{
	if(sen[i][strlen(sen[i])-1]=='r'&&sen[i][strlen(sen[i])-2]=='e')sen[i][strlen(sen[i])-2]='\0';
	if(sen[i][strlen(sen[i])-1]=='y'&&sen[i][strlen(sen[i])-2]=='l')sen[i][strlen(sen[i])-2]='\0';
	if(sen[i][strlen(sen[i])-1]=='g'&&sen[i][strlen(sen[i])-2]=='n'&&sen[i][strlen(sen[i])-3]=='i')sen[i][strlen(sen[i])-3]='\0';
	if(i!=n-1)printf("%s\n",sen[i]);
	else printf("%s",sen[i]);
}

}