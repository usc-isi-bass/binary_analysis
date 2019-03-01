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
	char a1[101]={-1};//????
	int i;
	cin.getline(a1,101);//?????
	for(i=0;i<=100;i++)
	{
		  if(a1[i]==0)//??????????
		break;
		if(a1[i]!=32)//?????????????
			cout<<a1[i];
		else
			if(a1[i-1]!=32)//?????????????????
				cout<<a1[i];
      

	}
	return 0;
}