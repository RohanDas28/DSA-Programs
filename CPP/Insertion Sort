#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<": ";
        cin>>a[i];
    }
    int min;
    for(int j=1;j<n;j++)
    {
        min=a[j];
        int k=j-1;
        while(a[k]>min && k>=0)
        {
            a[k+1]=a[k];
            k--;
        }
        a[k+1]=min;
    }
    for(int l=0;l<n;l++)
    {
        cout<<a[l]<<" ";
    }
    return 0;
}
