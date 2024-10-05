#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};//array defined

    int arr1[10];//array defined with the help of while loop
    int i=0;
    while(i<10)
    {
        arr1[i]=1+i;
        i++;
    }

    i=0;
    while(i<10)//array updated
    {
        arr[i]+=10;
        i++;
    }
    i=0;
    while(i<10)
    {
        printf("%d\n",arr[i]);
        i++;
    }

    int count=0;//total number of element in array
    i=0;
    while(i<10)
    {
        count++;
        i++;
    }
    printf("total no of elements = %d\n",count);

    int sum=0;//sum of elements
    i=0;
    while(i<10)
    {
        sum+=arr[i];
        i++;
    }
    printf("sum of the elements in array = %d\n",sum);

    int mul=1;//product of elements
    i=0;
    while(i<10)
    {
        mul*=arr[i];
        i++;
    }
    printf("product of the elements in array = %d",mul);
}