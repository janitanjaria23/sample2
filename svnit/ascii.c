#include<stdio.h>
#include<string.h>
main()
{
	char s[30];
	int i;
	printf("enter name: ");
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++)
	{
		printf("%c : %d \n",s[i],s[i]);
	}
}

