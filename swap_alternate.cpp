#include<iostream>
#include<climits>

using namespace std;

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size-1; i=i+2)
    {
        if (i<size)
        {
            swap(arr[i], arr[i + 1]);
        }
        
    }
    
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
    cout<< " "<<arr[i];
    }
    
}
int main()
{
    int array[] = {2, 4, 5, 3, 8};
    int size = sizeof(array) / sizeof(int);
    cout<<"before function :<<endl;
    printArray(array, size);
    swapAlternate(array, size);
    cout<< "the updated array is: <<endl;
    printArray(array, size);


    return 0;
}
 




