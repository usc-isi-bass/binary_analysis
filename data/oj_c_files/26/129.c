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

//???????
//??????
//?????????????????
int main()
{
	char sen[101];						//????
	int len;							//??????
	cin.getline(sen,101,'\n');			//????
	len=strlen(sen);					//????
	for(int i=0;i<len;i++)				//i?????
		if(sen[i]==' ')					//?sen[i]???
		{
			int j=i+1;					//j?????
			while(sen[j]==' ')			//?j??????j+1??????????
				j++;
			for(int k=j;k<101;k++)		//???????????????
				sen[k-j+i+1]=sen[k];
		}
	cout<<sen;							//??
	return 0;
}