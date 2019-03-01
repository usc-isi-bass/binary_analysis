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


int m, n, total;
void putapp(int app, int dish, int last){	//app:???? dish:???? last????????					//???????
	//cout << total << endl;
	if((dish>0 && app<last) || (dish==0 && app>0))
		return;
	if(dish==0 && app==0)
		total++;
	for(int i=last; i<=app; i++){
		putapp(app-i, dish-1, i);
	}
	if(dish == n)
		cout << total << endl;
}

int main(){
	int a;
	cin >> a;
	int i=0;
	while(i<a){
		total = 0;
		cin >> m >> n;
		putapp(m, n, 0);
		i++;
	}
	return 0;
}
