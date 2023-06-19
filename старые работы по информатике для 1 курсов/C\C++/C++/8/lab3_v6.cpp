#include <iostream>

using namespace std;

void table_marks(int* gr1, int len1, int* gr2, int len2);
void mid_marks(int* gr1, int len1, int* gr2, int len2);
void diff_mid_marks(int mid_mark1, int mid_mark2);

int main()
{
    setlocale(LC_ALL, "Russian");

    // длины массивов групп
    const int length1 = 10, length2 = 7;

    // группа 1
    int group1[length1] = {5, 5, 2, 4, 5,
    4, 3, 2, 5, 3};

    // группа 2
    int group2[length2] = {3, 4, 5, 2, 5, 4, 5};


    table_marks(group1, length1, group2, length2);
    mid_marks(group1, length1, group2, length2);

}


// средние баллы групп
void mid_marks(int* gr1, int len1, int* gr2, int len2)
{

    // переменные для хранения средних оценок групп
    int mid_mark1 = 0, mid_mark2 = 0;

    // вычисление среднего значения оценок 1 группы
    for (int i = 0; i < len1; i++)
    {
        // суммирование оценок
        mid_mark1 += gr1[i];
    }
    // частное от суммы оценок и кол-ва студентов
    mid_mark1 /= len1;

    cout << "Средний балл 1 группы: " << mid_mark1 << endl;

    // вычисление среднего значения оценок 2 группы
    for (int j = 0; j < len2; j++)
    {
        // суммирование оценок
        mid_mark2 += gr2[j];
    }
    // частное суммы оценок и кол-ва студентов
    mid_mark2 /= len2;

    cout << "Средний балл 2 группы: " << mid_mark2 << endl;

    diff_mid_marks(mid_mark1, mid_mark2);
}


// таблица баллов
void table_marks(int* gr1, int len1, int* gr2, int len2)
{
    cout << "| группа   | оценки \t\t\t|" << endl;
    cout << "| 1 группа | ";
    for (int i = 0; i < len1; i++)
    {
        cout << gr1[i] << " ";
    }
    cout << " \t|" << endl;

    cout << "| 2 группа | ";
    for (int j = 0; j < len2; j++)
    {
        cout << gr2[j] << " ";
    }
    cout << " \t\t|" << endl;
    cout << endl;
}


// разница ср баллов
void diff_mid_marks(int mid_mark1, int mid_mark2)
{
    if (mid_mark1 > mid_mark2)
    {
        cout << "Средний балл 1 группы выше среднего балла 2 группы" << endl;
    }
    else if (mid_mark2 > mid_mark1)
    {
        cout << "Средний балл 2 группы выше среднего балла 1 группы" << endl;
    }
    else 
    {
        cout << "Средний балл 1 и 2 групп равны" << endl;
    }
}