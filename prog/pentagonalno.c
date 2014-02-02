#include<stdio.h>
#include<math.h>
main()
{
	int i,p1,p2,s,d;
	
		
		for(i=1;;i++)
		{
		p2=((3/2)(i*i)-(i/2));
		s=p1+p2;
		d=p1-p2;
		if(((1+sqrt(1+(24*s)))%6==0) || ((1-sqrt(1+(24*s)))%6==0))
		{
		if((1+sqrt(1+(24*d)))%6==0) || ((1-sqrt(1+(24*d)))%6==0))  
		{
		printf("%d,%d",p1,p2);
		}
		}
		}
}
