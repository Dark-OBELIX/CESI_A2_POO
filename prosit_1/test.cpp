#include <iostream>
using namespace std;

class Functor
{
public:
    int operator()(int a, int b)
    {
        cout << "operator" << endl;

        return a < b;
    }
};

int main()
{
    Functor f;
    int a = 5;
    int b = 7;
    cout << f(a, b) << endl;
    cout << "ans" << endl;

    return 0;
}

/*#include <iostream>
using namespace std;

class Functor
{
    public :
     double x,y;
     int operator(int a, int b);

};

int Functor::operator(int a, int b)
{
    cout << "operator" << endl;
    return a + b;
};

int main()
{
    Functor f;
    int a = 5;
    int b = 8;
    cout << f(a, b) << endl;
    cout << "ans" << endl;

    return 0;
}*/