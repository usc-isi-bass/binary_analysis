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
	char string[256] , substring[256] , replacement[256] ; 
		cin >> string >> substring >> replacement;
		int i , j = 0 , length1 , length2 , m , num = 0;
		length1 = strlen(string);
		length2 = strlen(substring);
		for(i = 0 ; i < length1 ; i++)
		{
			m = i;
			if(string[i] == substring[j])
			{
				
				for(j = 0 ; j < length2 ; j++)
				{
					if(string[i] == substring[j])
					{
						i++;
						num++;
					}
				}
			}
			j = 0;
			i = m;
			if(num == length2)
			{
				for(j = 0 ; j < length2 ; j++)
				{
					string[i] = replacement[j];
					i++;
				}
			break;
			}
			num = 0;
		}
		cout << string <<endl;
		return 0;
}