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
	int i,j,numword=1,l=0;//??,i?????j????????l?????????
	char words[100][100]={'\0'},aph[100]={'\0'};//???????????
	cin.getline(aph,100);

	for(i=0;;i++)
	{
		if(aph[i]=='\0')
			break;
		if(aph[i]==' ')
		{
			numword++;
			l=0;
		}
		else if(aph[i]!=' ')
		{
			words[numword][l]=aph[i];
			l++;
		}
	}
	for(j=numword;j>1;j--)
	{
		cout<<words[j]<<" ";
	}
	cout<<words[1];
	return 0;
}