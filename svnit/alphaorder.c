#include<stdio.h>
#include<string.h>
main()
{
	int i,j;
	char s[30],temp;
	
	printf("enter string: ");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if(s[i]>s[j])
			{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}}
	}


		printf("%s",s);
	
}
