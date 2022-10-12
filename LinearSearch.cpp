#include<iostream>
using namespace std;
void linear_search(int arr[], int len, int item)
{
    int i;
    for (i=0;i<=len;i++)
    {
        if (arr[i]==item)
        {
            cout<<"Element found at index > "<<i<<endl;
            return;
        }
    }
    cout<<"Element not found !"<<endl;
}
int main()
{
    int a[10],i,b;
    cout<<"Enter the array elements > "<<endl;
    for (i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"ARRAY :"<<endl;
    for (i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Enter the element to be searched "<<endl;
    cin>>b;
    linear_search(a,10,b);
}
