#include <iostream>
using namespace std;
class ComplexNumber
{
public:
    int real;
    int imaginary;
    ComplexNumber(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    ComplexNumber operator++()
    {
        real += 2;
        return *this;
    }
};
int main()
{
    ComplexNumber c1(3, 7);
    ++c1;
    cout << c1.real << endl;
    return 0;
}