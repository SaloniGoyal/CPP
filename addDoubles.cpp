#include <iostream>
using std::cout;

double add (double x, double y)
{
    return x + y;
}

int main()
{
    int total = add(3, 4);
    cout << "3 + 4 is " << total << '\n';
    
    double another = add(1.3, 2.5);
    cout << "1.3 + 2.5 is " << another << '\n';
    return 0;
}




