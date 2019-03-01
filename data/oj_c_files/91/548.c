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

//*************************************************************
//*                  ???????????                   *
//*                  ?????1000010573                     *
//*                  ?????2010?12?                     *         
//*************************************************************


int main()               //??? 
{
	char in[111],out[111];
	cin.getline(in,111);
	int lenin;
	lenin = strlen(in);
	for(int i = 0 ; i < lenin ; i++)
	{
		out[i] = in[i%lenin] + in[(i+1)%lenin];
	}
	for(int j = 0 ; j< lenin ; j++)
	{
		cout<<out[j];
	}

       return 0; 
}

