#include <stdio.h>
#include <math.h>
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2917 
int main()
{
	double a=0;
    double a_total=0;
    
	while(scanf("%lf", &a)!=EOF)
	{   
	a_total = a*a;
	a_total = a_total * 10;
	//printf("%lf\n",a_total);
	a_total = (int)(a_total+0.5);
	//printf("%lf\n",a_total);
	a_total = a_total / 10;
		printf("%0.1lf\n",a_total);
	}
    
}