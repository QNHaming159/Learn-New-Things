#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    cout << " Number 1: ";
    cin >> num1;
    cout << " Number 2: ";
    cin >>  num2;
    cin.ignore();
    cout << endl;
    int num3 = num1 + num2;
    cout << " Result: " << num3 << endl;
    cout << " Press Enter to exit program...";
    cin.get();
}  
