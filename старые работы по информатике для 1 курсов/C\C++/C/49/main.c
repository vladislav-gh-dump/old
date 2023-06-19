#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>



// матрица
int matrix[6][6];
// кол-во строк и столбцов матрицы
int n = 6;

void set_rand_nums(int a, int b);
void show_matrix(void);
void num_column(void);
void try_num_column(int num);

int main()
{
    setlocale(LC_ALL, "Rus");

    // наполнение массива случайными числами
    set_rand_nums(-9, 9);

    // вывод матрицы в консоль
    show_matrix();

    // номер столбца с наименьшим из положительных элементов верхнего треугольника
    num_column();
 
    return 0;
}


// наполнение массива случайными числами
void set_rand_nums(int a, int b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = a + rand() % (b - a);
        }
    }

    return;
}


// вывод матрицы в консоль
void show_matrix()
{
    // ручка
    HANDLE hStd;

    // ручка как устройство ввода
    hStd = GetStdHandle(STD_OUTPUT_HANDLE);

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
            printf("| %3d ", matrix[i][j]);
        }
        printf("|\n");

        SetConsoleTextAttribute(hStd, 8); // серый цвет
        // заполнение разделителя
        printf("--------------------------------------\n");
    }
    printf("\n");

    return;
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

    printf("Номер столбца с наименьшим из положительных элементов верхнего треугольника: %d\n", column);

    // проверка номера столбца 
    try_num_column(column);

    return;
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
                result += matrix[i][num - 1];
        }

        printf("Номер столбца четный, сумма элементов: %d\n", result);
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

        printf("Номер столбца нечетный, произведение элементов: %d\n", result);
    }


    return;
}