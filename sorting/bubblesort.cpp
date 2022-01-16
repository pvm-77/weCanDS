#include<iostream>

using namespace std;
int main(){
	int temp;
	int anyGivenArray []={2,1,6,4,3,5};
	int sizeOfArray=6;
	// logic for bubble sort
	for (int i = 0; i <= sizeOfArray-1; ++i)
	{
		for (int j = 0; j <= sizeOfArray-2; ++j)
		{
			if (anyGivenArray[j]>anyGivenArray[j+1])
			{
				temp=anyGivenArray[j];
				anyGivenArray[j]=anyGivenArray[j+1];
				anyGivenArray[j+1]=temp;

			}
			
		}
	}
	for (int i = 0; i < 6; ++i)
	{
		cout<<anyGivenArray[i]<<" ";
	}

	return 0;
}