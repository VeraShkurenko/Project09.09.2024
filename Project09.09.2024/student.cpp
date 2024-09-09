#include<iostream>
#include<time.h>
using namespace std;

class Point
{
    //private:
    int x;
    int y;
    int z;
public:
    Point()
    {
        cout << "Construct\n";
        x = y = 0;
    }
    Point(int x1)
    {
        cout << "construct X\n";
        x = x1;
    }
    Point(int x1, int y1) :Point(x1)
    {
        cout << "construct Y\n";
        y = y1;
    }
    Point(int x1, int y1, int z1) :Point(x1, y1) // ������� �����������(���������� ������, �������������� �� ������ �������������)
    {
        cout << "construct Z\n";
        z = z1;
    }
    void Output()
    {
        cout << "X: " << x << "\tY: " << y << endl;
    }

    //////  ������ ���������

    int GetX()const  // ����������
    {
        // x = -100; // ������ 
        return x;
    }

    int GetY()const
    {
        return y;
    }

    int GetZ()const
    {
        return z;
    }

    /////  ������������ 
    void SetX(int X)
    {
        // X <100
        if (X > 100)
        {
            cout << "Error\n";
            x = 0;
        }
        else
        {
            x = X;
        }
    }
};
/*
��������� �������������:
���_������ ( ��������� (����������) ) : ���_������ ( ���������� �������� ���������� )
{
����;
};
*/

void main()
{
    Point obj1(10, 20, 30);
    cout << obj1.GetX() << endl;

    obj1.SetX(1000);
    cout << obj1.GetX() << endl;
    obj1.SetX(25);
    cout << obj1.GetX() << endl;



    system("pause");
}