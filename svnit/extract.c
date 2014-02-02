#include<stdio.h>
#include<string.h>
main()
{
	int i,ctr;
	char s1[30],a[30],s2[30];
	printf("enter the string:\n ");
	gets(s1);
	printf("enter the word: \n");
        gets(a);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=a[i] && ctr<=(strlen(s1)-strlen(a)))
		{
			s2[i]=s1[i];
		ctr++;
		}
	}
	printf("%s \n",s2);
}
