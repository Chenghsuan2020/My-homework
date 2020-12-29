#include<stdio.h>
#include<string.h>
int main()
{   //https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3067
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