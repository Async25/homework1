#include <iostream>

using namespace std;

class MyClass
{
    public:
        void fun(int *Array, int length)
        {
            int i, n;
            int Min = Array[0];
            int Num = 0;

            for (i=0 ; i<length ; i++)
            {
                if (i>0)
                {
                    cout << ", ";
                }

                cout << Array[i];

                if (Array[i] < Min)
                {
                    Min = Array[i];
                    Num = i;
                }
                else
                    ;
            }

            n = Array[Num];
            Array[Num] = Array[length-1];
            Array[length-1] = n;

            cout << "\n";

            for (i=0 ; i<length ; i++)
            {
                if (i>0)
                {
                    cout << ", ";
                }

                cout << Array[i];
            }

            cout << "\n";
        }
};

int main(void)
{
    int length;
    int i;

    cout << "input array length:" << endl;
    cin >> length;

    int Array[length];

    cout << "input num:" << endl;

    for (i=0 ; i<length; i++)
    {
        cin >> Array[i];
    }

    MyClass obj;

    obj.fun(Array, length);

    return 0;
}
