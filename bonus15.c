#include<stdio.h>
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF)
	{	
		int sum = 0;
		for(int i=1;i<=n;i++)
		{
			if(i%3==0)
			{
				sum += i ;
			}
		}
		printf("%d\n",sum);
	}
}