// hacker rank problem:- rotate left

#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main() 
{
    int n; 
    cin>>n;;
    int d;
    cin>>d;;
    int *arr = (int*)malloc(sizeof(int) * n);
    
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    
    int *arr2= (int*) malloc(sizeof(int) * n);
    int curr=0;
    for(int i=d; i<n; i++) {
        arr2[curr] = arr[i];
        curr++;
    }
    for(int i=0; i<d; i++) {
        arr2[curr] = arr[i];
        curr++;
    }
    
    for(int i=0; i<n; i++) {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}