#include<stdio.h>
#include<string.h>

main()
{
	int i,ctr=0;
	char c;
	char s[30];
	printf("enter word: \n");
	gets(s);
	
	printf("enter character to be searched: \n");
	scanf("%c",&c);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		{
		ctr++;
		}
	}
	printf("answer: %d \n",ctr);
}

