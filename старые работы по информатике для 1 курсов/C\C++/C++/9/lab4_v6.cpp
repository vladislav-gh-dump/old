#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;


// матрица
int matrix[6][6];
// кол-во строк и столбцов матрицы
int n = 6;

void set_rand_nums();
void show_matrix();
void num_column();
void try_num_column(int num);

int main()
{
    setlocale(LC_ALL, "Russian");

    // наполнение массива случайными числами
    set_rand_nums();

    // вывод матрицы в консоль
    show_matrix();

    // номер столбца с наименьшим из положительных элементов верхнего треугольника
    num_column();
}


// наполнение массива случайными числами
void set_rand_nums() 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = -n + rand() % (n - (-n));
        }
    }
}


// вывод матрицы в консоль
void show_matrix() 
{
    // ручка
    HANDLE hStd;

    // ручка как устройство ввода
    hStd = GetStdHandle(STD_OUTPUT_HANDLE);

    // разделитель строк
    string delim = "--";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                // установка цвета (ручка, цвет | усиление цвета)
                SetConsoleTextAttribute(hStd, 3); // голубой цвет
            }
            else if (i < j)
            {
                SetConsoleTextAttribute(hStd, 4); // красный цвет
            }
            else
            {
                SetConsoleTextAttribute(hStd, 2); // зеленый цвет
            }

            // вывод чисел матрицы
            cout << "| " << setw(3) << matrix[i][j] << " ";
            
            // заполнение разделителя
            delim += "------";
        }
        cout << "|" << endl;

        SetConsoleTextAttribute(hStd, 8); // серый цвет
        cout << delim << endl;
        delim = "--";
    }
    cout << endl;
}


// номер столбца с наименьшим из положительных элементов верхнего треугольника
void num_column() 
{
    // наименьшее число, столбец
    int min_num = 100, column = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // элементы верхнего треугольника
            if (i < j)
            {
                // положительные элементы меньше минимального числа
                if (matrix[i][j] > 0 && matrix[i][j] < min_num)
                {
                    min_num = matrix[i][j];
                    column = j + 1; // на 1 больше, так как первый индекс 0
                }
            }

        }
    }

    cout << "Номер столбца с наименьшим из положительных элементов верхнего треугольника: " << column << endl;

    // проверка номера столбца 
    try_num_column(column);
}


// проверка номера столбца
void try_num_column(int num) 
{
    int result = 0;
    // для четного числа
    if (num % 2 == 0) 
    {
        // сумма элементов столбца
        for (int i = 0; i < n; i++)
        {
            if (i < num - 1)
                result += matrix[i][num-1];
        }

        cout << "Номер столбца четный, сумма элементов: " << result << endl;
    }
    else
    {
        // для нечетного числа
        result = 1;
        
        // произведение элементов столбца
        for (int i = 0; i < n; i++)
        {
            if (i < num - 1)
                result *= matrix[i][num - 1];
        }

        cout << "Номер столбца нечетный, произведение элементов: " << result << endl;
    }

}