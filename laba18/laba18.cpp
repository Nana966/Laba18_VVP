// laba18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    //задание 1
    cout << "Task 1. ";
    int n;
    cout << "\nPrint size arrays: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* masA1 = new int[n];
        int* masB1 = new int[n];
        cout << "Array A: \n";
        for (int i = 0; i < n; i++)
        {
            masA1[i] = rand() % 30;  //рандомно заполняем массив A
            cout << masA1[i] << " "; //выводим на экран
        }
        cout << "\nArray B: \n";
        for (int i = 0; i < n; i++)
        {
            masB1[i] = rand() % 30;  //рандомно заполняем массив B
            cout << masB1[i] << " "; //выводим на экран
        }
        int t;
        for (int i = 0; i < n; i++)
        {
            t = masA1[i];
            masA1[i] = masB1[i];
            masB1[i] = t;
        }
        cout << "\nModified array A: \n";
        for (int i=0;i<n;i++)
            cout << masA1[i] << " "; //выводим на экран массив А
        cout << "\nModified array B: \n";
        for (int i = 0; i < n; i++)
            cout << masB1[i] << " "; //выводим на экран массив В
    }

    //задание 2
    cout << "\n\nTask 2. ";
    int count=0;
    cout << "\nPrint size arrays: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* masA2 = new int[n];
        double* masB2 = new double[n];
        cout << "Array A: \n";
        for (int i = 0; i < n; i++)
        {
            masA2[i] = rand() % 30;  //рандомно заполняем массив A
            cout << masA2[i] << " "; //выводим на экран
        }
        cout << "\nArray B: \n";
        double averege=0;
        for (int i = 0; i < n; i++)
        {
            averege = 0;
            count = 0;
            for (int j = 0; j <= i; j++)
            {
                averege = averege + masA2[j];
                count++;
            }
            masB2[i] =averege/ count;
            cout << masB2[i] << " "; //выводим на экран
        }
    }

    //задание 3
    cout << "\n\nTask 3. ";
    cout << "\nPrint size array: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas3 = new int[n];
        cout << "Array: \n";
        for (int i = 0; i < n; i++)
        {
            mas3[i] = rand() % 30;  //рандомно заполняем массив 
            cout << mas3[i] << " "; //выводим на экран
        }
        int oddNumber=0;
        for (int i = n - 1; i > 0; i--)
        {
            if (mas3[i] % 2 != 0)
            {
                oddNumber = mas3[i];
                break;
            }
        }
        cout << "\nModified array: \n";
        for (int i = 0; i < n; i++)
        {
            if (mas3[i] % 2 != 0)
                mas3[i] = mas3[i] + oddNumber;
            cout << mas3[i] << " ";
        }
    }
    //задание 4
    cout << "\n\nTask 4. ";
    cout << "\nPrint size array: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas4 = new int[n];
        cout << "Array: \n";
        for (int i = 0; i < n; i++)
        {
            mas4[i] = rand() % 30;  //рандомно заполняем массив 
            cout << mas4[i] << " "; //выводим на экран
        }
        int iMin = 0, iMax = 0;
        for (int i = 0; i < n; i++)
        { 
            if (mas4[i] <= mas4[iMin])
                iMin = i;
            if (mas4[i] >= mas4[iMax])
                iMax = i;
        }
        cout << "\nMin = " << mas4[iMin] << "\nMax = " << mas4[iMax];
        if (iMin != iMax)
            if (iMin < iMax)
                for (int i = iMin + 1; i < iMax; i++)
                    mas4[i] = 0;
            else
                for (int i = iMax + 1; i < iMin; i++)
                    mas4[i] = 0;
        cout << "\nModified array: \n";
        for (int i=0;i<n;i++)
            cout << mas4[i] << " ";
    }
    //задание 5
    cout << "\n\nTask 5. ";
    cout << "\nPrint size array: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int First,t;
        cout << "Print first number: ";
        cin >> First;
        int* mas5 = new int[n];
        cout << "Array: \n"; 
        mas5[0] = First;
        cout << mas5[0] << " ";
        for (int i = 1; i < n; i++)
        {
            mas5[i] = i+3;  //заполняем массив со 2 элемента по возрастанию
            cout << mas5[i] << " "; //выводим на экран
        }
        for (int i = 0; i < n-1; i++)
        {
            if (mas5[i] > mas5[i + 1])
            {
                t = mas5[i];
                mas5[i] = mas5[i + 1];
                mas5[i + 1] = t;
            }
            else
                break;
        }
        cout << "\nModified array: \n";
        for (int i = 0; i < n; i++)
            cout << mas5[i] << " ";
    }
    cout << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
