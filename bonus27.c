#include <stdio.h>

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=1437

int main()
{
	
	double n,j,sum = 1;
	while(scanf("%lf",&n)!=EOF){
	
	for(j=n;j>0;j--){
	   sum *= j;
	}
	
	printf("%0.0lf\n",sum);
	sum = 1 ;
	}
	
	return 0;
}
