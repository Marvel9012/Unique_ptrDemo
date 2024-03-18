#include<iostream>
using namespace std;

int main()
{
    unique_ptr<int>p1 = make_unique<int>(100);
    return 0;
}