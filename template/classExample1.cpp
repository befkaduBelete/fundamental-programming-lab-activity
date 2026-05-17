#include <iostream>
using namespace std;
template <class T>
class Nnmber
{
private:
    T number;

public:
    Nnmber(T N) : num(n) {

                  };

    T getNuumber()
    {
        return number;
    }
};

int main()
{
    Nnmber num(7);
    Nnmber DubleNUmber(7.8);
    cout << num.getNuumber();
    cout << DubleNUmber.getNuumber();
}
