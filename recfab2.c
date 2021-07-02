#include <stdio.h>
int fab(int,int,int,int);
int main()
{ 
    printf("enter the number: ");
    int n,a=3, c=0, d=1;
    scanf("%d",&n);
    if(n==1)
    {
    printf("0");
    }
    else if(n==2)
    {
         printf("0\t");
         printf("1\t");
    }
    else
    {    
    printf("0\t");
      printf("1\t");
    fab(a,n,c,d);
    }
    return 0;
}
int fab(int h,int e,int j,int k)
{
    int f;
      if(h<=e)
      {
       f=j+k;
      j=k;
       k=f;
       printf("%d\t",f);
      fab(h+1,e,j,k);
     }
     

}

/*int main()
{
    
     printf("enter the number: ");
    int n;
    scanf("%d",&n);
   
            int a=0;
            int b=1;
             printf("0\n");
            printf("1\n");
            for(int i=3;i<=n;i++){
                int c=a+b;
                printf("%d\n",c);
                a=b;
                b=c;
                }
    return 0;
}*/