#include <singleton.hpp>

using namespace std;

int main()
{
    singleton::getInstance()->setData(3);
    cout << singleton::getInstance()->getData() << endl;

    return 0;
}