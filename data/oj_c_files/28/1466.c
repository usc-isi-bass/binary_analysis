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
char str[30000];
cin.getline(str,30000);
int num=1;
int i=0,j=0;
while(str[i]!='\0')
{
	if(str[i]==' '&&str[i-1]!=' ')
	{
		if(j==0)
		{
			cout<<num;
			j++;
		}
		else
			cout<<','<<num;
		num=0;
	}
	i++;
	if(str[i]!=' ') num++;
}
if(j==0) cout<<num-1<<endl;
else cout<<','<<num-1<<endl;
return 0;
}