// program to count odd and even number in array


#include<iostream>
using namespace std;
int main(){
int arraysize;
cin>>arraysize;
int arr[arraysize];
int evenCount=0;
int oddCounbt=0;
for (int i = 0; i < arraysize; ++i)
{
	/* code */
	cin>>arr[i];
}
for (int i = 0; i < arraysize; ++i)
{
	/* code */
	if (arr[i]%2==0)
	{
		/* code */
		evenCount++;
	}
	else
		oddCounbt++;
}
cout<<"total even Numbers in array:"<<evenCount<<endl;
cout<<"total Odd Numbers in array:"<<oddCounbt<<endl;



	return 0;
}