
#include <iostream>
using namespace std;

int main()
{
	int temp;
    int locationMinElement,iteration,j;
    const int n=5;
    int a[]={3,4,1,2,6};
    for(iteration=0;iteration<n-1;iteration++)
    {
        locationMinElement=iteration;
        for(j=iteration+1;j<n;j++)
            if(a[j]<a[locationMinElement]);
                locationMinElement=j;
            
        
        temp=a[j];
        a[j]=a[iteration];
        a[iteration]=temp;
            
        
    }
    // print sorted array
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }

    return 0;
}
