#include<stdio.h>
#include<string.h>
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1283
int main(int argc, char *argv[]) {
    int x = 0;
    int y = 0;
    while(scanf("%d %d",&x,&y)!=EOF)
        {   
            if(x ==0||y==0)
            {
                printf("no answer\n");
            }
            else
            {
                for(int i=1;i<=y;i++)
                    {
                        for(int j=1;j<=x;j++)
                        {
                            printf("*");
                        }
                        printf("\n");
                    }

            } 
        }
}/*
4 5

****
****
****
****
****
*/