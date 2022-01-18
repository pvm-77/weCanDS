# Guess the output
1.
```c++
#include<iostream>
using namespace std;
int main() {
	int i, size = 5, arr[size];
	for (i = 0; i < size; i++)
		cin >> arr[i] ;
	for (i =; i < size; i++)
		cout << arr[i];
}
```

2.
```c++
#include<iostream>
using namespace std;
int main() {
	int arr[4] = {2, 4, 8, 16}, i = 4, j;
	while (i) {
		j = arr[i] + i;
		i--;
	}
	cout << j << endl;
}
```

3.
```c++
#include<iostream>
using namespace std;
int main() {
	int arr[5] = {5, 10, 15, 20, 25};
	func (arr) ;

}
func (int arr [])
{
	int i = 5, sum = 0;
	while (i > 2)
		sum = sum + arr [--i];
	cout << sum << endl;
}

```
4.
```c++
#include<iostream>
using namespace std;
int main() {
	int i, arr [8] = {1, 2, 3, 4, 5, 6, 7, 8} ;
	for (i = 7; i >= 0; i--)
		cout << --arr [--i] << "\t" << endl;

}
```
5.
```c++
#include<iostream>
using namespace std;
int main() {
	int i = 0, sum = 0, arr[6] = {4, 2, 6, 0, 5, 10};
	while (arr[i] )
	{
		sum = sum + arr[i] ;
		i++;
	}
	cout << sum << endl;

}
```
6.
```c++
#include<iostream>
using namespace std;
int main() {
	int x[10], y[3][4], z[2][3][5];
	cout << sizeof(x) << sizeof(y) << sizeof(z) << endl;
}
```

7.
```c++
#include<iostream>
using namespace std;
int main() {
	int a = 4, b = 6;
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[5] = {6, 7, 8, 9, 10};
	swapvar(a, b);
	swaparr(arr1, arr2);
	cout << "a:" << a << "b:" << b << endl;
	cout << "arr1[0]:" << arr1[0] << "arr1[4] :" << arr[4] << endl;
	cout << "arr2[0] :" << arr2[0] << "arr2[4] :" << arr2[4] << endl;
}
swapvar(int a, int b) {
	int temp;
	temp = a, a = b, b = temp;

}
swaparr(int a[5], int b[5]) {
	int i, temp;
	for (int i = 0; i < 5; ++i)
	{
		temp = arr1[i], arr1[i] = arr2[i], arr2[i] = temp;
	}


}
```
8.
```c++
#include<iostream>
using namespace std;
int main() {
	int i, j, arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	for (i = 0; i < 4; i++)
	{
		for (j = O; j < 3; j++)
			cout << arr[j][i]  ;
		cout << endl;
	}

}



```
9.
```c++
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int i, j, arr[200];
	for (int i = 0; i < count; ++i)
		arr[i] = 1;
	for (int i = 2; i <= sqrt(200); ++i)
		for (int j = i * 2;  < 200; j += i)
			if (arr[i] == 1)
				cout << i << endl;
}



```
10.
```c++

#include<iostream>
using namespace std;
int main() {
	int a[10] = {2, -3, 4, -5, 6, 7, 1, 9, -10, -11};
	int i, j, x, k = O;
	for (i = 0; i < 10; i++)
	{
		x = a[k] ;
		if (x < 0)
		{
			for (j = k; j < 10; j++)
				a[j] = a[j + 1];
			a[9] = x;
			else
			}
		k++;
	}
	for (i = 0; i < 10; i++J)
		cout << a[i] << endl;
}


```