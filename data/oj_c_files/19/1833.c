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
	char str[4][500];
	int i , j , k , count = 0 , len[3] = {0};
	for (i = 0; i < 3; i ++)
	{
		cin.getline(str[i], 500);
		len[i] = strlen(str[i]);
	}

	for (i = 0; str[0][i] != 0; i ++)
	{
		if ((i == 0 || (i > 0 && str[0][i - 1] == ' ')) && ((str[0][i + len[1]] == ' ') || (str[0][i + len[1]] == 0)))
		{
			for (j = 0; j < len[1]; j ++)
				if (str[0][i + j] != str[1][j])
					break;
		
				if (j == len[1])
				{
					strcpy(str[3], str[0] + i + len[1]);
					strcpy(str[0] + i + len[2], str[3]);
					
					for(k = 0; str[2][k] != 0; k ++)
						str[0][i + k] = str[2][k];
				
				count ++;
			}
		}
		str[0][len[0] + count * (len[2] - len[1]) + 1] = 0;
	}
	
	cout << str[0] << endl;
	return 0;
}