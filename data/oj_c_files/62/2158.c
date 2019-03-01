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

//***************************************************************************
//?????????????????                                        *
//????wayne                                                             *
//?????12.22                                                           *
//***************************************************************************
int main()
{
	char sentence[100];                           //?????????
	int i,len;                                    //??????
	cin.getline(sentence,100);                    //??????
	len=strlen(sentence);                         //??????
	for (i=0;i<=len-2;i++)                        //????
	{
		if (sentence[i]==' '&&sentence[i+1]==' ') //?????
			continue;                             //???
		else 
			cout<<sentence[i];                    //????
	}
	cout<<sentence[len-1]<<endl;                  //???????????
	return 0;
}