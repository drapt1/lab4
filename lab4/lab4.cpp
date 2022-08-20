#include <iostream>
using namespace std;
int main()
{
    int n, ind;
    int a = 0;
    setlocale(LC_ALL, "Russian");
    int mas[100];
    cout << "Введите количество элементов массива ";
    cin >> n;
    for (int i = 0; i < 100; i++) {
        mas[i] = rand() % 10;
    }
    cout << "\n ";
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
        if (mas[i] == 0) //определение индекса последнего нулевого элемента
        {
            a = i;
        }
    }
    cout << endl;

    for (int i = a; i < n; i++) //удаление последнего нулевого 
    {
        mas[i] = mas[i + 1];
    }

    cout << "\n " << " Введите индекс элемента ";
    cin >> ind;
    for (int i = n - 1; i > ind; i--)
    {
        mas[i] = mas[i - 1];
    }
    mas[ind] = 100;
    cout << "\n ";
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
    return 0;
}
