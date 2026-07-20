#include <iostream>
using namespace std;

class Matrix
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;

public:
    // Constructor
    Matrix()
    {
        cout << "Enter rows and columns of First Matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns of Second Matrix: ";
        cin >> r2 >> c2;

        if (c1 != r2)
        {
            cout << "Matrix multiplication is not possible." << endl;
            exit(0);
        }

        cout << "\nEnter elements of First Matrix:\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << "\nEnter elements of Second Matrix:\n";
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cin >> b[i][j];
            }
        }
    }

    void multiply()
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                c[i][j] = 0;

                for (int k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }

    void display()
    {
        cout << "\nProduct Matrix:\n";

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix obj;      // Constructor is called automatically
    obj.multiply();
    obj.display();

    return 0;
}
