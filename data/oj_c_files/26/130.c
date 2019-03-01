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

//*********************************
//*??????                         *
//*???????????         *
//*???11?22?                 *
//*********************************
int main()
{
	int i=0,j=0,lena=0;
	char str[102];
	cin.getline(str,102);          //?????????????? 
	lena=strlen(str);            //????????? 
	for(i=0;i<=lena-1;i++)
	{
		if(str[i]!=' '||(str[i]==' '&&str[i+1]!=' '))//?????????? 
			cout<<str[i];//?????????????? 
	}
	return 0;
}
