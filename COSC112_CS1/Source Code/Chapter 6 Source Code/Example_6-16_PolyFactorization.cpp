//Program: Second degree polynomial factorization 

#include <iostream>
#include <cmath>

using namespace std;

void factorization(int b, int c, int& u1, int& v1, bool& isFactorable);
 
int main()
{
    int coeffOfX;
    int constantTerm;
    int u;
    int v;
    bool isPolynomialFactorable;

    cout << "Enter the coefficient of x: ";
    cin >> coeffOfX;
    cout << endl;

    cout << "Enter the constant term: ";
    cin >> constantTerm;
    cout << endl;

    factorization(coeffOfX, constantTerm, u, v, 
                  isPolynomialFactorable);

    if (isPolynomialFactorable)
    {
        cout << "x^2";

        if (coeffOfX > 0)
            cout << " + " << coeffOfX << "x";
        else if (coeffOfX < 0)
            cout << " - " << abs(coeffOfX) << "x";

        if (constantTerm > 0)
            cout << " + " << constantTerm;
        else if (constantTerm < 0)
            cout << " - " << abs(constantTerm);

        cout << " = (x";
        if (u > 0)
            cout << " - " << u << ")(x";
        else if (u < 0)
            cout << " + " << abs(u) << ")(x";

        if (v > 0)
            cout << " - " << v << ")" << endl;
        else if (v < 0)
            cout << " + " << abs(v) << ")" << endl;
    }
    else
        cout << "The polynomial is not factorable." << endl;

    return 0;
}

void factorization(int b, int c, int& u1, int& v1, bool& isFactorable)
{
    double discriminant;
    int temp;
    
    isFactorable = true;

    discriminant = b * b - 4 * c;

    if (discriminant < 0)
        isFactorable = false;
    else
    {
        temp = static_cast<int>(sqrt(discriminant));

        if (temp * temp != discriminant)
            isFactorable = false;
        else
        {
            if (((-b + temp) % 2 != 0) || ((-b - temp) % 2 != 0))
                isFactorable = false;
            else
            {
                u1 = (-b + temp) / 2;
                v1 = (-b - temp) / 2;
            }
        }
    }
}

