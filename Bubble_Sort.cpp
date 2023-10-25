#include <iostream>
using namespace std;
void func(int arr[],int n)
{
    string sw;
    for(int i=0;i<n;i++)
    {
        sw = "false";
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                sw = "true";
            }
        }
        if(sw == "false")
            break;
    }
    for(int q=0;q<n;q++)
        cout<<arr[q]<<' ';
}

int main()
{
    int num;
    cout<<"Enter number of elements : ";
    cin>>num;
    int arr[num];
    cout<<"Enter elements : ";
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"Array after sorting : ";
    func(arr,num);
    return 0;
}
