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
	char str[100],ch[100];
	memset(ch,0,sizeof(ch));
	memset(str,0,sizeof(str));
	cin.getline(str,100);
	int i,j=0,flag=0;
	for(i=0;str[i] != '\0';i++)
	{
		if(str[i]==' ' && flag==0)
		{
			flag++;
			ch[j++] = str[i];
		}
		if(str[i]!=' ') 
		{
			ch[j++]=str[i];
			flag=0;
		}
	}
	cout<<ch<<endl;
	return 0;
}


