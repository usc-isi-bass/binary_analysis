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

	char str[101];
int test(int num,char sex)
{
	if(str[num]!='\0')
	{
		if(str[num]==sex) test(num+1,sex);
		else 
		{
			int i=0;
			for(i=num-1;i>=0;i--)
			{
				if(str[i]==sex)
				{
			 	cout<<i<<" "<<num<<endl;
				str[i]='!';
				 str[num]='!';
				 break;
				}
			}
		}
		test(num+1,sex);
	}
	else return 0;
} 
int main()
{
	cin.getline(str,101);
	char boy=str[0];
	test(1,boy);
	return 0;
}
 