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

//????



char *Strlwr(char*);

int main()
{
	char input[110], replaced[110], replace[110];				//??????????????????????
	char inputL[110], replacedL[110];							//???????????????????
	char *p, *pL, *start;										//????input??inputL????
	int len;													//?????????
	char temp;

	cin.getline(input, 110);
	cin.getline(replaced, 110);
	cin.getline(replace, 110);

	strcpy(inputL, input);
	strcpy(replacedL, replaced);

	len = strlen(replaced);
	pL = strstr(inputL, replacedL);								//?????????
	start = input;												//???????
	while(pL != NULL)											//??????
	{
		if((pL == inputL || isalpha(*(pL - 1)) == 0) && isalpha(*(pL + len)) == 0)
		//??????????
		{
			p = input + (pL - inputL);							//p?????????
			*p = '\0';											//??\0?

			cout << start << replace;

			start = p + len;									//start????????????
			pL = strstr((start - input) + inputL, replacedL);	//pL??inputL?????start?????
		}
		else
		{
			p = input + (pL - inputL) + len;					//p?????????
			temp = *p;											//???
			*p = '\0';

			cout << start;

			start = p;											//????????
			*start = temp;										//????
			pL = strstr((start - input) + inputL, replacedL);
		}
	}


	cout << start << endl;										//????????

	return 0;
}

char *Strlwr(char *p)
{
	for(; *p != '\0'; p++)
		if(*p >= 'A' && *p <= 'Z')
			*p += 32;

	return p;
}