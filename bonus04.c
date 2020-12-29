#include <stdio.h>
#include <math.h>
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=2914

 
int main()
{
	float a=0;
    float b=0;
 
	while(scanf("%f%f", &a,&b)!=EOF)
	{   
		printf("%0.1f\n",((a*b)/2));
	}
}