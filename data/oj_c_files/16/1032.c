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

//*5-1
int MyInverseitoa(int iNum, char*ch,  int radix)
{
	int iBits=0;
   //?iNum?????10????????????????? 
	do 
	{
		ch[iBits]=iNum%radix;  //
		printf("%d",ch[iBits]);
		iNum/=radix;
		iBits++;
	} while (iNum);
	ch[iBits]='\0';
	return iBits-1;
}

int main()
{
	int iNum, iNumInverse, iBits=0;

	char ch[12];  ///int ??10?
	scanf("%d", &iNum);
	if (iNum==0)
	{
		iNumInverse=iNum;
		printf("%d", iNumInverse);
	}
	else
	{
		iBits = MyInverseitoa(iNum, ch,10);  //?????'\0'
		//iNumInverse = Myatoi(ch, iBits);
		//printf("%d", iNumInverse);
	}

	return 0;
}
