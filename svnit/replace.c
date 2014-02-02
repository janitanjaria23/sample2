#include<stdio.h>
#include<string.h>
main()
{
	int i,ctr=0,x;
	char s[30],p[30],w[30];
	
	printf("enter string: \n");
	gets(s);
  	printf("enter the word to be replaced: \n");
        gets(w);
  	printf("enter the word to be inserted: \n");
        gets(p);
	x=strstr(s,w);
	for(i=0;s[i]!='\0';i++)
	{
		if (i>=x)
		{
			while(p[i]!='\0')
			{
				s[i]=p[i];
			}
		}
	}
	printf("%s \n",s);
}

