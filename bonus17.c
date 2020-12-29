#include <stdio.h>
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6955
int main(int argc, char *argv[]) {
	int a = 0;
	int sum = 0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{	
		if(i!=a)
		{
			printf("%d + ",i);

		}
		else
		{
			printf("%d = ",i);
		}
		
		sum += i;
	}
	printf("%d\n",sum);
}
//1 + 2 + 3 = 6