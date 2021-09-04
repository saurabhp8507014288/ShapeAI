/* Print this pattern using loops
For n=5
	    *
	   * *
	  * * *
	 * * * *
	* * * * *

*/

#include<iostream>
using namespace std;
int main()
{
    int n=5,s,r,c;
    for(r=1;r<=n;r++)
    {
        for(s=1;s<=n-r;s++)
            cout<<" ";
        for(c=1;c<=r;c++)
            cout<<"* ";
        cout<<"\n";
    }
    return 0;
}