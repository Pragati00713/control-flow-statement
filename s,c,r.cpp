#include <iostream>
using namespace std;
int main()
{
    char shape;
    cout << "enter shape(s,c and r):";
    cin >> shape;
    switch (shape)
    {
    case 's':
        int s;
        cout << "Enter a one side square:-";
        cin >> s;
        cout << "Area of Square is :- " << s * s << "sq";
        break;

    case 'c':
        // pir2
        int c;
        cout << "Enter radius of circle:-";
        cin >> c;
        cout << "Area of Circle is :- " << 3.14 * c * c << "sq";
        break;
    case 'r':

        int l,b;
        cout << "Enter length of rectangle:-";
        cin >> l;
        cout << "Enter breadth of rectangle:-";
        cin >> b;
        cout << "Area of rectangle is :- " << l*b << "sq";
        break;
    }
}