//Took help from internet Got confused.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int noProblem, count = 0, page = 0, problem;
    while( cin>>noProblem )
    {
        page++;
        problem = 1;
        while ( noProblem > 0 )
        {
            noProblem--;
            if ( problem == page )
            {
                count++;
            }
            if ( problem%k == 0 && noProblem != 0 )
            {
                page++;
            }
            problem++;
        }
    }
    cout<<count;
}
