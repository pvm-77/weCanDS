// write a program to print the elements of array in reverse order
#include<iostream>
using namespace std;
int main(){
int arraysize;
cin>>arraysize;
int arr[arraysize];
int sumArrayElement=0;
for (int i = 0; i < arraysize; ++i)
{
	/* code */
	cin>>arr[i];
}
int t=arraysize-1;
while(t>=0)
{
	cout<<arr[t]<<" ";
	t--;
}

	return 0;
}