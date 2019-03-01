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
 *???? ???
 *????: 2012-11-21
*/
void tree(int x,int y){//?????????
	if(x==y)
		cout << x;
	else if(x<y)
		tree(x,y/2);
	else if(x>y)
		tree(x/2,y);
}
int main (){
	int x,y;
	cin >> x >> y;//?????
	tree(x,y);//??x1
	return 0;
}
