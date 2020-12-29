#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2664
int main(int argc, char *argv[]) {
	int x = 0;
	int y = 0;
	int X = 0;
	int Y = 0;
	while(scanf("%d %d %d %d",&x,&y, &X,&Y)!=EOF)
	{	
		printf("%d\n",(Y-y)/(X-x));
	}
}
/*
1 1

2 2

1
*/