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

//****************************************************************************** 
//???????? 
//?????? 
//???10-30 
//****************************************************************************** 
int main()
{
	int n;                            //??????? 
	int a[100000];                    //?????? 
	int key;                          //?????? 
	int count = 0;                    //????????? 
	
	cin >> n;
	
	for(int i = 0; i < n; i ++)       //???? 
	cin >> a[i];
	
	cin >> key;
	
	for(int i = 0; i < n - count; i ++)                   //???n-count??? 
	{
		if(a[i] == key)                                   //??????????key?????? 
		{
			for(int j = i; j < n - 1 - count; j ++)       //?????n - count - 1??? 
			a[j] = a[j + 1];                              //???? 
				
			count ++; 
			i = i - 1;                                    //?????key??????????i--,?????       
		}
		
	}
	
	for(int i = 0; i < n - count - 1; i ++)              //????????? 
	cout << a[i] << " ";
	
	cout << a[n - count - 1];
	
	return 0;
}