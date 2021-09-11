#include <iostream>
#include <cmath>
using namespace std;

int printA()
{
    system("cls");
    cout << "Edge a: ";
}
int printB(float a)
{
    system("cls");
    cout << "Edge a: " << a << endl;
    cout << "Edge b: ";
}
int printC(float a,float b)
{
    system("cls");
    cout << "Edge a: " << a << endl;
    cout << "Edge b: " << b << endl;
    cout << "Edge c: ";
}
int printEnd(float a, float b, float c)
{
    string triangletype;
    float p,s;
    system("cls");
    cout << "Edge a: " << a << endl;
    cout << "Edge b: " << b << endl;
    cout << "Edge c: " << c << endl << endl;

    if (a+b>c and a+c>b and b+c>a)
    {
       if (a*a==b*b+c*c or b*b==a*a+c*c or c*c==a*a+b*b)
        {
           triangletype = "Right";
        }
       else if (a==b and b==c)
        {
           triangletype = "Equilateral";
        }
        else if (a==b or a==c or b==c)
        {
            triangletype = "Isosceles";
        }
        else if (a*a > b*b+c*c or b*b > a*a+c*c or c*c > a*a+b*b)
        {
            triangletype = "Obtuse";
        }
        else
        {
            triangletype = "Pointed";
        }
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));

        cout << "Type: " << triangletype << " Triangle" << endl << endl;
        cout << "Triangle Area: " << s << endl;
        cout << "Triangle Rerimeter: " << p*2 << endl << endl;
    }
    else
    {
        cout << "Error: Can't found a triangle" << endl << endl;
    }
    cout << "Try again? (y/n) ";    
}

int main()
{
    float a,b,c;
    char again = 'Y';

    while (again == 'Y' or again == 'y')
    {
        int check = false;
        printA();
        while (!(cin>>a))
        {
            printA();
            cin.clear();
            cin.ignore(23,'\n');
        }
        printB(a);
        while (!(cin>>b))
        {
            printB(a);
            cin.clear();
            cin.ignore(23,'\n');
        }
        printC(a,b);
        while (!(cin>>c))
        {
            printC(a,b);
            cin.clear();
            cin.ignore(23,'\n');
        }
        while (!check)
        {
            printEnd(a,b,c);
            cin >> again;
            if (again=='Y' or again=='N' or again=='y' or again=='n')
            {
                check = true;
            }
        }
    }
    system("cls");
    system("pause");
    return 0;
}
