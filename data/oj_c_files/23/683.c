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
char str[100],word[100][100];
int i=0,j=0;

gets(str);

for(int k=0;str[k]!='\0';k++)
{
	
	if(str[k]==' ')
	{ 
		word[i][j]='\0';
		i++;j=0;
		continue;
	}
	word[i][j]=str[k];
	j++;
}
word[i][j]='\0';
for(j=0;word[i][j]!='\0';j++)
	cout<<word[i][j];

for(int k=i-1;k>=0;k--)
{
	cout<<" ";
	for(j=0;word[k][j]!='\0';j++)
	cout<<word[k][j];
}
//cin>>str;
return 0;
}
