#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, R, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |";
    cout << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -2)
            y = x + 3;
        else
            if (-2 * R < x && x <= 0)
                y = -x * R / 4.;
            else
                if (0 < x && x <= 4)
                    y = -R;
                else
                    if (4 < x && x <= 8 - R)
                        y = sqrt(R * R - x * x + 16 * x - 64) - R;
                    else
                        y = -R;


        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    system("pause");
    return 0;
}