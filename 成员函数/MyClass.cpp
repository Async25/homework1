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
                cout << Array[i] << ", ";

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
                cout << Array[i] << ", ";
            }
        }
};

int main(void)
{
    MyClass obj;

    int test[] = {3,8,2,9,7};
    int length = sizeof(test)/sizeof(test[0]);

    obj.fun(test, length);

    return 0;
}
