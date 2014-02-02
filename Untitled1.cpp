#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


 void merge(int a[],int p,int q,int r);
 void mergesort(int a[],int p,int r);






main()
{     int maxsize=10,choice;
      int a[maxsize];
      srand(time(NULL));
      for(int i=0;i<maxsize;i++)
      {
              a[i]=1+rand()%100;
              }

       printf("\nUNSORTED ARRAY:");
       for(int i=0;i<maxsize;i++)
      {
               printf("%d  ",a[i]);
               }
        mergesort(a,0,maxsize-1);
        printf("\nSORTED ARRAY:");
       for(int i=0;i<maxsize;i++)
      {
               printf("%d  ",a[i]);
               }
}

 void merge(int a[],int p,int q,int r)
 {
      int i,j,k,b[1000];
      i=p;
      j=q+1;
      k=p;
      while(i<=q&&j<=r)
      {
                       if(a[i]<=a[j])
                       {
                                     b[k]=a[i];
                                     i++;
                                     k++;
                                     }
                       else
                       {
                           b[k]=a[j];
                           j++;
                           k++;
                       }
      }
      while(i<=q)
      {
                 b[k]=a[i];
                 k++;
                 i++;
                 }
       while(j<=r)
      {
                 b[k]=a[j];
                 k++;
                 j++;
                 }
      for(int l=p;l<=k;l++)
      {
              a[l]=b[l];
              }

      return;

















  }
 void mergesort(int c[],int p,int r)
 {    int q;
      if(p<r)
      {
             q=floor((p+r)/2);
             mergesort(c,p,q);
             mergesort(c,q+1,r);
             merge(c,p,q,r);
             }

      return;
 }





