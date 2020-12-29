#include <stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2667
int main(int argc, char *argv[]) {
	int x = 0;
	int y = 0;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)
			{
				printf("%d x %d = %d\n",i,j,i*j);
			}
		}
	}
}
/*
2 2

135790

97531
*/