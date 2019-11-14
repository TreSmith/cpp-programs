#include <iostream>
using namespace std;

int main()
{
    int x=0, y=0;   //Read in integers then determine what quardrant those coordinates would be in
    cin >> x;
    cin >> y;

    if (x > 0 && y > 0)
        cout << "1";
    if (x < 0 && y > 0)
        cout << "2";
    if (x < 0 && y < 0)
        cout << "3";
    if (x > 0 && y < 0)
        cout << "4";

    return 0;
}