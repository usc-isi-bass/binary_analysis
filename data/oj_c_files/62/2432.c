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

//***********************************
//******      ??    ???   ******
//******      ?? 1200016612   *****
//******   ??  ???????  ****
//***********************************
int main()                                                       //?????
{
	char s[100];                                                 //??????s????????
	char a[100][100];                                            //???????????????
	int b[100]={0};                                              //??????b[]??????
	int i=0,j=0;
	for(;;) 
	{
		cin>>s;                                                  //??????
		for(j=0;j<100;j++)                                       //?????
		{
			if(s[j]!='\0')
				b[i]++;
		}
		for(j=0;j<b[i];j++)                                      //?????????????????????   
		{
			a[i][j]=s[j];
		}
		i++;
		if(getchar()=='\n')                                     //???????????????
			break;
	}
	cout<<a[0];                                                 //???????
	for(j=1;j<i;j++)                                            //????????????
	{
		cout<<" "<<a[j];
	}
	return 0;
}