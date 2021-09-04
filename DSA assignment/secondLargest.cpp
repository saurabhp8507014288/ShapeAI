// Write a program that takes n elements from the user and displays the second largest element of an array

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    cout<<"enter all elements: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp;
    for (int i = 0; i<n; i++)   
    {  
        for (int j = i + 1; j < n; j++)   
        {  
            if (arr[i] > arr[j])   
            {  
                temp = arr[i];  
                arr[i] = arr[j];  
                arr[j] = temp;  
            }  
        }  
    }  
    cout<<"second largest: "<<arr[n-2];  
}  