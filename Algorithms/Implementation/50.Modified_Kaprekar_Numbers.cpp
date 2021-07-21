#include <bits/stdc++.h>
using namespace std;
//kaprekarFormaula is given in wikipedia refrence attached with the question
int kaprekarFormula(int no_digit, int no)
{
    //In simple int range exceedes
    long int x = (long int)(pow(no, 2)) % (long int)(pow(10, no_digit));
    long int y = ((long int)(pow(no, 2)) - x ) / (long int)(pow(10, no_digit));

    return (x + y);
}

void kaprekarNumbers(int p, int q)
{
    int count = 0, final = 0, temp = 0, c = 0;
    for (p; p <= q; p++)
    {
        temp = p;
        while (temp > 0)
        {
            temp = temp / 10;
            count++;
        }
        final = kaprekarFormula(count, p);
        if (final == p)
        {
            c++;
            cout << p << " ";
        }
        count = 0;
    }
    //to check if there is no number printed
    if (c == 0)
    {
        cout << "INVALID RANGE";
    }
}

int main()
{
    int p, q;
    cin >> p >> q;
    kaprekarNumbers(p, q);
}
