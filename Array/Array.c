#include<stdio.h>
#include"data_structure.h"

int main()
{
int array[100],i,choice,element,stindex,newvalue,sppos,srvalue;

M:  printf("How many values:");
    scanf("%d",&element);

if(element>=1)
{
    printf("Starting Index for Array:");
    scanf("%d",&stindex);

    printf("\nEnter %d values:",element);
    for (i=stindex;i<stindex+element;i++)
        scanf("%d",&array[i]);
}
else
    goto M;
while(1)
{
    printf("\n---------Menu---------");
    printf("\nPress 0 for quit");
    printf("\nPress 1 for insertion at last position");
    printf("\nPress 2 for insertion at specific position");
    printf("\nPress 3 for display");
    printf("\nPress 4 for deletion from specific position");
    printf("\nPress 5 for Bubble sort");
    printf("\nPress 6 for Linear search");
    printf("\nPress 7 for Binary search");

    printf("\n\nEnter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0: printf("\nThank you\n\n");
                exit(0);
                break;
        case 1: printf("\nChoice = Insertion at last position");
                printf("\nEnter new value for insertion:");
                scanf("%d",&newvalue);
                element=InsertionLast_1DArray(array,element,stindex,newvalue);
                break;
        case 2: printf("\nChoice = Insertion at specific position");
                if(element>=1)
                {
                    printf("\nEnter the position between %d to %d for insertion:",1,element);
                    scanf("%d",&sppos);
                    if(sppos>=1 && sppos<=element)
                    {
                        printf("\nEnter new value for insertion:");
                        scanf("%d",&newvalue);
                        element=InsertionSpecific_1DArray(array,element,stindex,newvalue,sppos);
                    }
                    else
                    {
                        printf("Wrong Position\n");
                    }
                }
                else
                printf("\nNo elements in the array");
                break;
        case 3: printf("\nChoice = Display One Dimensional Array");
                if(element>=1)
                Display_1DArray_Index(array,element,stindex);
                else
                printf("\nNo elements in the array");
                break;
        case 4: printf("\nChoice = Deletion from specific position");
                if(element>=1)
                {
                    printf("\nEnter the position between %d to %d for Deletion:",1,element);
                    scanf("%d",&sppos);
                    if(sppos>=1 && sppos<=element)
                    {
                        element=DeletionSpecific_1DArray(array,element,stindex,sppos);
                    }
                    else
                    {
                        printf("Wrong Position\n");
                    }
                }
                else
                printf("\nNo elements in the array");
                break;
        case 5: printf("\nChoice = Bubble Sort");
                if(element>=1)
                {
                    OneD_Array_BubbleSort(array,element,stindex);
                }
                else
                printf("\nNo elements in the array");
                break;
        case 6: printf("\nChoice = Linear Search");
                if(element>=1)
                {
                    printf("\nEnter value for searching\n");
                    scanf("%d",&srvalue);
                    Linear_Search(array,element,stindex,srvalue);
                }
                else
                    printf("\nNo elements in the array");
                break;
        case 7: printf("\nChoice = Binary Search");
                if(element>=1)
                {
                    printf("\nEnter value for searching\n");
                    scanf("%d",&srvalue);
                    Binary_Search(array,element,stindex,srvalue);
                }
                else
                    printf("\nNo elements in the array");
                break;

    }
}
return 0;
}

