// Write a program to find the largest number among three numbers entered by the user.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a >= b && a >= b)
        cout << "Largest number: " << a;
    if(b >= a && b >= c)
        cout << "Largest number: " << b;
    if(c >= b && c >= b)
        cout << "Largest number: " << c;
    return 0;
}