
#include<stdio.h>
int main()
{
	int r=0;
	char s;
	scanf("%c %d",&s,&r);
 
    for(int i=0;i<r;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%c",s);
		}
		printf("\n");
	}
}