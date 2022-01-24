// write a program to find the dum of array elements
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
for (int i = 0; i < arraysize; ++i)
{
	sumArrayElement+=arr[i];
}
cout<<"sum of array elements is :"<<sumArrayElement<<endl;

	return 0;
}