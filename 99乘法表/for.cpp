#include <iostream>
using namespace std;

int i,j;

int main()
{
    for (i=1;i<=9;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<j<<"x"<<i<<"= "<<i*j<<" ";
        }
        cout<<"\n";
    }
}
