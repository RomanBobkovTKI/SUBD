#include <algorithm>
#include "Header.h"
#include <stdexcept>

using namespace std;

Stack::Stack(const int maxSize) :
    size(maxSize)
{
    stackPtr = new Stack[size];
    top = 0;
}


Stack::~Stack()
{
    delete[] stackPtr;
}
