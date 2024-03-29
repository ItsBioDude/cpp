#include <iostream>
#include <cmath>
using namespace std;

#include "utils.cpp"

double Bai1c(int n)
{
    double S = 1;
    for (int i = 2; i <= n; ++i)
    {
        S += pow(-1, (i + 1)) * (double(1) / factorial(i));
    }
    return S;
}

int main()
{
    int n;
    cout << "Bai 1c\n"
         << "Nhap n: ";
    cin >> n;
    double S = Bai1c(n);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
