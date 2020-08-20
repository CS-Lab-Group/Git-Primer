#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a =-1;
    double b = 1;
    int n = 100;
    double deltaX = (b - a)/n;

    auto Fx = [](double x)
    {
        return pow(x,2) - 3*x + 1;
    };

    double LTotal = 0;
    double RTotal = 0;


    for(int i = 0; i < n; i++)
    {
        LTotal += Fx(deltaX * i + a) * deltaX;
    }

    for(int i = 1; i < n; i++)
    {
        RTotal += Fx(deltaX * i + a) * deltaX;
    }


    cout << "Left Hand Sum: "<< LTotal << endl;
    cout << "Right Hand Sum: "<< RTotal << endl;

return 0;

}




