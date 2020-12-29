#include <stdio.h>
#include <math.h>
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855

 
int main()
{
	float a=0;
    float b=0;
    float h=0;
	while(scanf("%f%f%f", &a,&b,&h)!=EOF)
	{   
		printf("Trapezoid area:%0.1f\n",((a+b)*h)/2);
	}
}