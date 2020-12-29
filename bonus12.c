#include <stdio.h>

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/new_submit2.php?a=2923

int main()
{
	int a=0;
       
	while(scanf("%d", &a)!=EOF)
	{   
		int b = (a - (a%10))/10;
		printf("NT10=%d\n",b);
		int c = (a - (b*10) - ((a - b*10)%5))/5;
		printf("NT5=%d\n",c);
		printf("NT1=%d\n",a-10*b-5*c);
		
	}
    
}
