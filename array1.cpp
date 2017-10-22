#include<iostream>

using namespace std;
int main()
{   int n;
    int a[20];
    cout<<"enter values to v inserted ";
    cin>>n;
    int start=0,end=n-1;
	
	for(int i=0;i<n;i++)
	{
		 cin>>a[i];
	}
	cout<<"Array elements are ";
	for(int i=0;i<n;i++)
	{
		 cout<<" "<<a[i];
	}
	for(int i=0;i<end;i++)
	{
		swap(a[start],a[end]);
		start++;
		end--;
	//	cout<<a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
		}	
}
