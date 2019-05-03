#include <iostream>
#include <assert.h>
#include <memory>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    unique_ptr<int> ls = make_unique<int>(3);
    return 0;
}
