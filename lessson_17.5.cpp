// lessson_17.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <cmath>

class Example
{
private:
    int a = 564;
public:
    int GetA()
    {
        return a;
    }
    void SetA(int newA)
    {
        a = newA;
    }
};


class VectorMet
{
private:
    double x;
    double y;
    double z;
    double xend;
    double yend;
    double zend;

public:

    VectorMet() : x(0), y(0), z(0), xend(0), yend(0), zend(0)
    {}

    VectorMet(double metX, double metY, double metZ, double metXend, double metYend, double metZend) : x(metX), y(metY), z(metZ), xend(metXend), yend(metYend), zend(metZend)
    {
       
    }


   double vecSize()
    {
        double sum = 0;
        sum = (x - xend)* (x - xend) + (y - yend) * (y - yend) + (z - zend) * (z - zend);
        return sqrt(sum);
    }
};

int main()
{
    //First part lesson
    Example temp, temp1;
    temp.SetA(17);
    std::cout << temp1.GetA() << "\n";
    std::cout << temp.GetA() << "\n";

    //Second part
    double VecA[3];
    for (int i = 0; i < 3; i++)
    {
        int k = i+1;
        std::cout << "Enter " << k << " element vector VecA  ";
        std::cin >> VecA[i];
    }

    double VecB[3];
    for (int i = 0; i < 3; i++)
    {
        int k = i+1;
        std::cout << "Enter " << k << " element vector VecB  ";
        std::cin >> VecB[i];
    }

    VectorMet Vec1(VecA[0], VecA[1], VecA[2], VecB[0], VecB[1], VecB[2]);
    std::cout << Vec1.vecSize();

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
