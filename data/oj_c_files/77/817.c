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

int boy,girl,l=0;//???????????????
void match(char c[],int left)
{
	int i=0,j=0;
	for(i=0;i<l;i++)
	{
		if(c[i]==girl)
		{
			for(j=i-1;j>=0;j--)
			{
				if(c[j]==boy)
				{
					cout<<j<<" "<<i<<endl;
					break;
				}
			}
			c[i]='0';c[j]='0';
			left=left-2;
			break;
		}
	}
	if(left>0)
		match(c,left);
}
int main()
{
	char str[100];
	cin.getline(str,100);
	boy=str[0];
	l=strlen(str);
	girl=str[l-2];
	match(str,l);
	return 0;
}