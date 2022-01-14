#include <iostream>
using namespace std;
int main()
{
	
    int locationMinElement,i,j,temp,n;
    int a[]={3,4,1,2,6};
    n=5;

    for(i=0;i<n-1;i++)
    {
        locationMinElement=i;
        for(j=i+1;j<n;j++)
            if(a[locationMinElement]>a[j])
                locationMinElement=j;
            
        
        temp=a[i];
        a[i]=a[locationMinElement];
        a[locationMinElement]=temp;
            
        
    }
    // print sorted array
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }

    return 0;
}
