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
	int i,j,len,sp;															//????????????
	char str[31];															//???????????
	memset(str,'\0',sizeof str);
	cin.getline(str,31);													//?????
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='0'&&str[i]<='9')&&(str[i+1]<'0'||str[i+1]>'9'))		//??????????????
			cout<<str[i]<<endl;
		else if((str[i]>='0'&&str[i]<='9')&&(str[i+1]>='0'||str[i+1]<='9'))	//???????????????
			cout<<str[i];
		else
			continue;														//????
	}
	return 0;
}