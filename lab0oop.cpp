#include <iostream>
using namespace std;

void main()
{
    int i, j, kil = 5, key = 0, value, ciferka, newkil;

    int** silmas = new int* [kil];
    for (i = 0; i < kil; i++)
        silmas[i] = new int[kil];

    for (i = 0; i < kil; i++)
    {
        for (j = 0; j < kil; j++)
        {
            silmas[i][j] = 0;
            cout << silmas[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n dobaviti riadok(1) chi stovbec(2)?";
    while (key != 1 && key != 2)
    {
        cin >> key;
        if (key != 1 && key != 2)
            cout << "\nTry again!\n";
    }

    switch (key)
    {
    case 1:
        cout << "\n riadok. Which stolbec in new riadok u want to fill? \n";
        cin >> value;
        cout << "ciferka?:"; cin >> ciferka;

        newkil = kil + 1;
        silmas = new int* [newkil];
        for (i = 0; i < newkil; i++)
            silmas[i] = new int[kil];

        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
            {
                if (j == value - 1 && i == 5)
                {
                    silmas[i][j] = ciferka;
                    cout << silmas[i][j] << "\t";
                }
                else
                {
                    silmas[i][j] = 0;
                    cout << silmas[i][j] << "\t";
                }

            }
            cout << endl;
        }

        cout << silmas[3][38] << "\t";
        break;
    case 2:
        cout << "\n stovbec. Which riadok in stovbec u want to fill? \n";
        cin >> value;
        break;
    default: cout << "\nerror\n";
        break;
    }
    system("pause");
}