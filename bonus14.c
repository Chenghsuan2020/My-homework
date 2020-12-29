#include <stdio.h>
#include <math.h>
 
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
 
int main()
{
	int month = 0;
    
	while(scanf("%d", &month)!=EOF)
	{
		if(3<=month && month<=5)
		{
			printf("Spring\n");
		}
		
		else if(6<=month && month<=8)
		{
			printf("Summer\n");
		}
		
		else if(9<=month && month<=11)
		{
			printf("Autumn\n");
		}
		
		else
		{
			printf("Winter\n");
		}
	}
    
}