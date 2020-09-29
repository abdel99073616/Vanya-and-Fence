#include <iostream>

using namespace std;

int main()
{
    int x , y , sum = 0;
    cin>>x>>y;
    int arr[x];
    for(int i = 0 ; i<x ; i++)
    {
        cin>>arr[i];
        if(arr[i]>y)
        {
            sum+=2;
        }
        else
        {
            sum+=1;
        }
    }
    cout<<sum;

return 0;
}
