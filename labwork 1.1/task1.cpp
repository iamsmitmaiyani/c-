#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }
    vector<int> even_elements;
    for (int i = 0; i < n; ++i) 
	{
        if (arr[i] % 2 == 0)
		{
            even_elements.push_back(arr[i]);
        }
    }
   cout << "Even elements of the Array:";
    for (int i = 0; i < even_elements.size(); ++i) 
	{
        cout << even_elements[i];
        if (i != even_elements.size() - 1) 
		{
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}

