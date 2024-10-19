#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int elements;
    cout<<"How many elements in the array? :";
    cin>>elements;
    int array[elements];
    cout<<"Enter elements:";
    for(int i=0;i<elements;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<elements;i++)
    {
        cout<<array[i]<<" ";
    }
    int n=0;
    while(n!=elements)
    {
        for(int i=0;i<elements-n;i++)
        {
            if(array[i]>array[i+1])
            {
                swap(&array[i],&array[i+1]);
            }
        }
        n++;
    }
    cout<<"Sorted array is:"<<endl;
    for(int i=0;i<elements;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
/*output
How many elements in the array? :4
Enter elements: 5 4 3 5 5 4 3 5 
5 4 3 5 Sorted array is:
3 4 5 5 
*/