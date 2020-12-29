#include <stdio.h>
#include <math.h>
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2921
int main()
{
	double i=0;
	double a=1;
	int j=0;
	
	
	while(scanf("%lf", &i)!=EOF)
	{   
		if(i>31)
		{
			printf("Value of more than 31\n");
		}

		else if(i==0)
		{
			printf("1\n");
		}

		else
		{
			for( j=0;j<i;j++)
			{
				a = a * 2;
			}
			printf("%0.0lf\n",a);
		}
	}
	
}