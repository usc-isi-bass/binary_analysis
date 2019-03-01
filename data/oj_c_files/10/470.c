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

/*
 * lee2.cpp
 *
 *  Created on: 2011-6-8
 *      Author: 09143
 */
int kMis;
int Mis[30];
int Array[30];
void Lanjie(int iM)
{
	for(int i = iM; i < kMis; i ++)
	{
		if(Mis[iM - 1] >= Mis[i] && Array[iM - 1] <= Array[i])
			Array[iM - 1] = Array[i] + 1;
	}
	if(iM > 1) Lanjie(iM - 1);
	return;
}
int main()
{

	cin >> kMis;
	for(int i = 0; i < kMis; i ++)
		cin >> Mis[i];
	for(int i = 0; i < kMis; i ++)
	{
		Array[i] = 1;
	}
	Lanjie(kMis);
	int MaxLen = -1;
	for(int i = 0; i < kMis; i ++)
		if(MaxLen < Array[i]) MaxLen = Array[i];
	cout << MaxLen << endl;

}
