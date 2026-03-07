#include <iostream>
using namespace std;
/*3️⃣ Multiple Inheritance
Child → multiple parents*/
#include <iostream>
using namespace std;

class Father
{
public:
    void money()
    {
        cout << "Father gives money\n";
    }
};

class Mother
{
public:
    void care()
    {
        cout << "Mother cares\n";
    }
};

class Child : public Father, public Mother
{
};

int main()
{
    Child c;

    c.money();
    c.care();
}