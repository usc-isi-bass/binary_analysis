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
?? - 1062 ???	
??


??????????1, 2, 3, ...???????????????????????????1???????
??????????10????????(10, 5, 2, 1)??4????????(4, 2, 1)?????1?????
?????????1???????(1)???????x?y???????????????(x1, x2, ... ,1)?
1, y2, ... ,1)??????x = x1?y = y1?????????????i?j????xi ? yj????xi = yj ,
i + 1 = yj + 1, xi + 2 = yj + 2,... ??????????x?y???xi????yj??
????
??????????????x?y???????????1000?
????
?????????xi?
????
10 4
????
2
*/
void main()
{
	int jiaodian(int,int);
	int x,y,a;
	scanf("%d%d",&x,&y);
	a=jiaodian(x,y);
	printf("%d\n",a);
}

int jiaodian(int x,int y)
{
	int a,temp;
	if(x<y)
	{
		temp=x;
		x=y;
		y=temp;
	}
	if(x==y)
		a=x;
	else
		a=jiaodian(x/2,y);
	return a;
}
		