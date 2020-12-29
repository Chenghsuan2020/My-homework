#include <stdio.h>

//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749

int main()
{
		int x=0;
		int y=0;
		       
		while(scanf("%d%d", &x,&y)!=EOF)
		{
				if(x*x+y*y<=10000)
				{
					printf("inside\n");
				}
				else
				{
					printf("outside\n");
				}
		}
		    
}
