#include <iostream>

using namespace std;

void _for(void);
void _while(void);

int main(void)
{
    _for();
    _while();

    return 0;
}

void _for(void)
{
    int i,j;

    for (i=1 ; i<=9 ; i++)
        {
            for (j=1 ; j<=i ; j++)
            {
                cout << j << "x" << i << "=" << i*j << " ";
            }
            cout << "\n";
        }
        cout << endl;
}

void _while(void)
{
    int m=1,n=1;
    while (m<=9)
    {
        while (n<=m)
        {
            cout << n << "x" << m << "=" << m*n << " ";
            n++;
        }
        cout << "\n";
        m++;
        n=1;
    }
}
