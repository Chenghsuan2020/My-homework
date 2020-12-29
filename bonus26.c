#include<stdio.h>

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=7108
int main()
{
	int h;
	scanf("%d",&h);
	int i = 1;
	while (i <= h)
	{
		int j = 1;
		//印空白
		while (j <= h - i)
		{
			printf(" ");
			j++;
		}
		//印星號
		j = 1;
		while (j <= 1 + (i - 1) * 2)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	
	i = h-1; //i 要倒過來
	while (i >= 1)
		{
			//印空白
			int j = 1;
			while (j <= h - i)
				{
					printf(" ");
					j++;
				}
			//印星號
			j = 1;
			while (j <= 1 + (i-1) * 2)
				{
					printf("*");

					j++;
				}
			printf("\n");
			i--;
		}
	return 0;
}