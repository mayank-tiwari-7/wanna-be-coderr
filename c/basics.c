#include<stdio.h>
int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};//array defined

    int array1[10];//array1 defined with the help of for loop
    for(int i=0;i<=9;i++)
    {
        array1[i]=1+i;
    }

    for(int i=0;i<10;i++)//array updated
    {
        array[i]+=10;
    }

    for(int i=0;i<=9;i++)
    {
        printf("%d \n",array[i]);
    }

    int count=0;//total number of elements
    for(int i=0;i<10;i++)
    {
        count++;
    }
    printf("Total number of element = %d \n",count);

    int sum=0;//sum of elements in the array
    for(int i=0;i<=9;i++)
    {
        sum+=array[i];
    }
    printf("Sum of all elements in array1 = %d \n",sum);

    int mul=1;//multiplication of elements in the array
    for(int i=0;i<=9;i++)
    {
        mul*=array[i];
    }
    printf("Multiplication of all elements in array = %d ",mul);
}