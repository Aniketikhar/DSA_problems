#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarr(int arr[], int n)
{
    for(int i=0 ; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={2,7,5,9,7,8};
    int brr[5]={5,7,4,8,4};

    reverse(arr,6);
    reverse(brr,5);

    printarr(arr,6);
    printarr(brr,5);


return 0;
}