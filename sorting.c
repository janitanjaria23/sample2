#include<stdio.h>
//#include<conio.h>
#include<time.h>
#include<stdlib.h>

//insertion sort
ins(int n,int a[])
{
        int i=0,ctr=0,key=0,j=0,ac=0,bc=0,wc=0;
        int b[n];

//regular insertion sort is applied and hence this becomes the case of average case
        for(i=0;i<n;i++)
        {
                        key=a[i];
                        j=i-1;


                        while(j>=0 && a[j]>key)
                        {
                                   ctr++;
                                   a[j+1]=a[j];
                                   j=j-1;
                        }
                        a[j+1]=key;
        }
	/*for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}*/

        ac=ctr;


        ctr=0;
 //worst case algorithm for the reversely sorted array
        for(i=n-1;i>=0;i--)
        {


                                        b[n-i-1]=a[i];

        }
/*	for(i=0;i<n;i++)
        {
                printf("%d\n",b[i]);
        }
*/

        for(i=0;i<n;i++)
        {
                        key=b[i];
                        j=i-1;


                        while(j>=0 && b[j]>key)
                        {          ctr++;
                                   b[j+1]=b[j];
                                   j=j-1;
                 //                  ctr++;
                        }
                        b[j+1]=key;
        }
	/*for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}*/
        wc=ctr;
        ctr=0;
//best case sorting with the already sorted array
        for(i=0;i<n;i++)
        {
                        key=a[i];
                        j=i-1;
			            ctr++;
                        while(j>=0 && a[j]>key)
                        {
                                   a[j+1]=a[j];
                                   j=j-1;
                   //                ctr++;
                        }
                        a[j+1]=key;
        }
        bc=ctr-1;
        ctr=0;
	printf("Insertion Sort: \n");
        printf("Best Case: %d\n",bc);
        printf("Worst Case: %d\n",wc);
        printf("Average Case: %d\n",ac);
  //      getch();
}
//selection sort
sel(int n,int a[])
{
        int i=0,ctr=0,key=0,j=0,ac=0,bc=0,wc=0,temp=0,k=0;
        int b[n];

        for(i=0;i<n-1;i++)
        {                 k=i;
                          for(j=i+1;j<n;j++)
                          {
                                            if(a[j]<a[k])
                                            {
                                                       ctr++;
                                                        // min=a[j];
                                                        k=j;
                                            }
                          }
                          if(k!=i)
                          temp=a[k];
                          a[k]=a[i];
                          a[i]=temp;
        }
        ac=ctr;
        ctr=0;
	//worst case algorithm
        for(i=n;i>0;i--)
        {

                        b[n-i-1]=a[i];

        }

        for(i=0;i<n-1;i++)
        {                 k=i;
                          for(j=i+1;j<n;j++)
                          {
                           ctr++;

                                            if(b[j]<b[k])
                                            {
                                                        // min=a[j];
                                                        k=j;
                                            }
                          }
                          if(k!=i)
                          temp=b[k];
                          b[k]=b[i];
                          b[i]=temp;
        }
         wc=ctr;
         ctr=0;
	//best case algorithm
         for(i=0;i<n-1;i++)
        {                 k=i;
                          ctr++;

                          for(j=i+1;j<n;j++)
                          {

                                            if(a[j]<a[k])
                                            {
                                                        // min=a[j];
                                                        k=j;
                                            }
                          }
                          if(k!=i)
                          temp=a[k];
                          a[k]=a[i];
                          a[i]=temp;
        }
        bc=ctr;
	printf("Selection Sort:\n");
        printf("Best Case: %d\n",bc);
        printf("Worst Case: %d\n",wc);
        printf("Average Case: %d\n",ac);
    //    getch();
}

//bubble sort
bubble(int n,int a[])
{
           int i=0,ctr=0,key=0,j=0,ac=0,bc=0,wc=0,temp=0;
           int b[n];
           int last=n-1;
           //average case algorithm
           for(j=0;j<=n-1;j++)
           {
           ctr++;

           for(i=0;i<=last-1;i++)
           {

                             if(a[i]>a[i+1])
                             {
                                           temp=a[i+1];
                                           a[i+1]=a[i];
                                           a[i]=temp;

                             }
           }

        last=last-1;
           }
           ac=ctr-1;
           ctr=0;
           //worst case algorithm
           for(i=n;i>0;i--)
           {

                                        b[n-i-1]=a[i];

           }
           last=n-1;
            for(j=0;j<=n-1;j++)
            {
           for(i=0;i<=last-1;i++)
           {
               ctr++;


                             if(b[i]>b[i+1])
                             {
                    //                        ctr++;
                                           temp=b[i+1];
                                           b[i+1]=b[i];
                                           b[i]=temp;

                             }
           }
           last=last-1;
            }

           wc=ctr;
           ctr=0;
           //best case algorithm
           last=n-1;
           for(j=0;j<=n-1;j++)
           {
           ctr++;
           for(i=0;i<=last-1;i++)
           {
                             if(a[i]>a[i+1])
                             {

                                           temp=a[i+1];
                                           a[i+1]=a[i];
                                           a[i]=temp;

                             }
                             last=last-1;
           }
           }
           bc=ctr-1;

        printf("Bubble Sort:\n");
        printf("Best Case: %d\n",bc);
        printf("Worst Case: %d\n",wc);
        printf("Average Case: %d\n",ac);
      //  getch();
}
//defining the variables globally so that 'ctr' does not become '0' on recursive call
int ctr=0,ac=0,bc=0,wc=0;

//quick sort

//average case
int partition(int a[],int start,int finish)
{
    int i=0,key=0,j=0,temp=0;
    int pivot=a[start];
	int lh=start;
	int rh=finish-1;
	while(1)
	{
        ctr++;
		while(lh<rh && a[rh]>=pivot)
		{
             //ctr++;
			rh--;
		}
		while(lh<rh && a[lh]<pivot)
		{
            //ctr++;
			lh++;
		}
	if(lh==rh)
	{
		break;
	}

    temp=a[lh];
	a[lh]=a[rh];
	a[rh]=temp;

    }

    ac+=ctr;

   //printf("ctr=%d\n",ctr);
    //ctr=0;
	if(a[lh]>=pivot)
	{
	return start;
	}
	a[start]=a[lh];
	a[lh]=pivot;

	return lh;
}

void quicksort(int a[],int start,int finish)
{
	if(start>=finish)
	{
		return;
	}
	int boundary=partition(a,start,finish);
	quicksort(a,start,boundary-1);
	quicksort(a,boundary+1,finish);
}


//sort() is basically a wrapper function that calls quicksort() and hence leads to recursive function which gives the ultimate result
void sort(int n,int a[])
{
  int i=0,key=0,j=0,temp=0;
	int b[n];
    quicksort(a,0,n-1);

	 printf("Quick Sort:\n");
        printf("Average Case:%d\n",ac);
ctr=0;
    quicksort(a,0,n-1);
    	printf("Best Case:%d\n",ac);
	ctr=0;
	for(i=0;i<n;i++)
	{
                    b[n-i-1]=a[i];
    }
    quicksort(b,0,n-1);
	printf("Worst Case:%d\n",ac);
	//getch();

}

//merge sort

void merge(int vec[],int v1[],int v2[])
{
	int n1=n/2;
	int n2=n/2;
	int p1=0,p2=0,i=0;
for(i=0;i<n1+n2;i++)
{
    	while(p1<n1 && p2<n2)
	{
		if(v1[p1]<v2[p2])
		{
		        ctr++;
			vec[i]=(v1[p1]);
			p1++;
		}
		else
		{
			vec[i]=(v2[p2]);
			p2++;
		}
	}

	while(p1<n1)
	{
		vec[i]=(v1[p1]);
		p1++;
	}
	while(p2<n2)
        {
                vec[i]=(v2[p2]);
                p2++;
        }

}

}




void sort2(int n,int vec[])
{
    int i=0;
	if(n<1)
	{
		printf("Empty Array\n");
		return;
	}
	else
	{
		int v1[n/2];
		int v2[n/2];
		for(i=0;i<n;i++)
		{
			if(i<n/2)
			{
				v1[i]=(vec[i]);
			}
			else
			{
				v2[n-i-1]=(vec[i]);
			}
		}

		sort2(n,v1);
		sort2(n,v2);
		merge(vec,v1,v2);

/*for(i=0;i<n;i++)
{
    printf("%d\n",vec[i]);
}*/	}
}




main()
{
      int n,i=0,o=0;
      printf("Enter n:");
      scanf("%d",&n);


      int a[n];

      srand(time(NULL));
      for(i=0;i<n;i++)
      {
               a[i]=rand()%150;
      }

    printf("\n");
	printf("1>Insertion Sort\n");
	printf("2>Selection Sort\n");
	printf("3>Bubble Sort\n");
	printf("4>Quick Sort\n");
	printf("5>Merge Sort\n");

    printf("Enter your option:");
	scanf("%d",&o);
      if(o==1)
	{
	ins(n,a);
	}
	else if(o==2)
	{
	sel(n,a);
	}
	else if(o==3)
	{
      bubble(n,a);
	}
	else if(o==4)
	{
         sort(n,a);
    }
     else if(o==5)
     {
         sort2(n,a);
     }
     else
     {
         exit(1);
     }

}

