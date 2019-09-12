#include <iostream>
using namespace std;

int main()
{
    //initialization
    double num_divisor=0, big_divisor=0, modulo=0;
    int input, i, j;

    cout << "Anti-Prime number generator \n" << "Input number to test up to:"; //numbers over 100,000 take way to long
    cin >> input;


    for(i=1;i<=input;i++)//number being checked
    {
        num_divisor = 0;
        for(j=1;j<=i;j++)//divisor being checked
        {
            modulo = i%j;
            if(modulo == 0)//modulo to check divisibility
            {
               num_divisor++;
            }
        }
        if(num_divisor > big_divisor)
        {
            big_divisor = num_divisor;
            cout << i << endl;
        }
    }
	system("pause");
}
