#include<stdio.h>
int main()
{
    int num;
    printf("enter the element number of array:");
    scanf("%d",&num);

    int arr[num],i,element,position;
    int condition;

    printf("enter the element of array:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("input  elements are:");
    for(i=0;i<num;i++)
    {
        printf("%d",arr[i]);
    }
    while(1)
    {


    printf("\nwhat do you want? for insertion press 1 or press 2 for deletion;");
    scanf("%d",&condition);
    switch (condition)
    {

    case 1:
    printf("enter the element to be insert:");
    scanf("%d",&element);
    printf("enter the position :");
    scanf("%d",&position);


    while(position<=i)
    {
        arr[i]=arr[i-1];
i-- ;   }
arr[position]=element;
num ++;

printf("after insertion:");
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);

}
break;
       case 2:

    printf("enter the position to be deletion:");
    scanf("%d",&position);
    i=position+1;

    while(i<=num)
    {
        arr[i-1]=arr[i];
        i++;
    }
    num --;
    printf("\nafter deletion the elements are:[");
    for(i=0;i<num;i++)
{        printf("%d",arr[i]);

    }
printf("]");



}
    }
return 0;



}
