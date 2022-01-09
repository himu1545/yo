#include <stdbool.h>
//Function Definition

void Display_1DArray_Index(int ar[],int n,int in)
{
    int j;
    printf("\nElements of the array are:\n");
    for (j=in;j<in+n;j++)
        printf("\n%d",ar[j]);
}

int InsertionLast_1DArray(int ar[],int n,int in,int value)
{
    ar[n+in]=value;
    printf("\nInserted successfully at last position\n");
    return n+1;
}

int InsertionSpecific_1DArray(int ar[],int n,int in,int value,int pos)
{
    int i;
    for(i=in+n;i>=in+pos;i--)
        ar[i]=ar[i-1];
    ar[in+pos-1]=value;
    printf("\nInserted successfully at position %d",pos);
    return n+1;
}

int DeletionSpecific_1DArray(int ar[],int n,int in,int pos)
{
    int i,delvalue;
    delvalue=ar[in+pos-1];
    for(i=in+pos-1;i<in+n-1;i++)
        ar[i]=ar[i+1];
    printf("\nDeleted %d successfully from position %d",delvalue,pos);
    return n-1;
}

void OneD_Array_BubbleSort(int ar[],int n,int in)
{
    int i,j,temp;
    for(i=in;i<in+n;i++)
    {
        for(j=in;j<in+n-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("\n\nBubble Sorted Successfully!");
}

void OneD_Array_LinearSearch(int ar[],int n,int in,int searchvalue)
{
    int i,counter=0,result=0;
    for(i=in;i<in+n;i++)
    {
        if(ar[i]==searchvalue)
        {
            result=1;
            counter++;
        }
    }
    if(result==1)
    {
        printf("\nYour searched value %d is in the Array %d times",searchvalue,counter);
    }
    else{
        printf("\nYour searched value %d is not in the Array",searchvalue);
    }

}

void Binary_Search(int ar[],int n,int in, int value)
{
    int begind,endind,midind;
    begind=in;
    endind=in+n-1;

    OneD_Array_BubbleSort(ar,n,in);

    do
    {
        midind=(begind+endind)/2;
        if(value>ar[midind])
            begind=midind+1;
        else if (value<ar[midind])
            endind=midind-1;
    }while(value!=ar[midind] && begind<=endind);

    if(value==ar[midind])
        printf("\nFound");
    else
        printf("\nNot Found");
}

