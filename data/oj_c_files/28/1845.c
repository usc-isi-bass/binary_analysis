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

/*????????????????1??????????????????????? 

???????????????????????????????????????????????????????
????
?????????1??????300???????????1?????
????
???????????????
????
She was born in 1990-01-02  and  from Beijing city.

????
3,3,4,2,10,3,4,7,5*/

int main()
{
	int j,i;
	char sen[300][30];

	for(i=0;i<300;i++)
	{	
		scanf("%s",sen[i]);
		printf("%d",strlen(sen[i]));
		if(getchar()!='\n')
			printf(",");
		else
			break;

	}
return 0;
}