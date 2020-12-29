#include<stdio.h>
#include<string.h>
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=685
int main()
{
    int i,j,n;
    char s[1000];
 
    while(scanf("%s",s)!=EOF)
    {
        n=strlen(s);
        for(i=0,j=n-1;j>i;i++,j--)
        {
            if(s[i]!=s[j])
            {
                break;
            }
        }
        if(i>=j)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}