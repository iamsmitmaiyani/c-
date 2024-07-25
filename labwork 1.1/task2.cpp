#include <iostream>
#include <vector>
using namespace std;
bool isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
        return true;
    }
    return false;
}
int main() 
{
    int first_num, second_num;
    cout << "Enter the first number: ";
    cin >> first_num;
    cout << "Enter the second number: ";
    cin >> second_num;
    vector<int> leap_years;
    if (first_num > second_num) 
	{
        cout << "Error: First number should be less than or equal to the second number." << endl;
        return 1;
    }
    for (int year = first_num; year <= second_num; ++year)
	 {
        if (isLeapYear(year)) 
		{
            leap_years.push_back(year);
        }
    }
    cout << "The array is: ";
    for (int i = 0; i < leap_years.size(); ++i) 
	{
        cout << leap_years[i];
        if (i != leap_years.size() - 1) 
		{
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}

