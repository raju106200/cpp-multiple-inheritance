
#include <iostream>
using namespace std;

// First Parent Class
class Father
{
public:
    void showFather()
    {
        cout << "Father's Property" << endl;
    }
};

// Second Parent Class
class Mother
{
public:
    void showMother()
    {
        cout << "Mother's Property" << endl;
    }
};

// Child Class
class Child : public Father, public Mother
{
public:
    void showChild()
    {
        cout << "Child's Property" << endl;
    }
};

int main()
{
    Child obj;

    obj.showFather();
    obj.showMother();
    obj.showChild();

    return 0;
}

