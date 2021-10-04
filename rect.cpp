#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    for (int a=0;a<40;a++)
    {
        cout <<"*";

    }
    for (int row=0;row<40;row++)
    {
        cout << "*";
        for (int i=0;i<40;i++)
        {
            cout << " ";

        }
        cout << "*\n" ;
    }
    for (int j=0;j<40;j++)
    {
        cout << "*";

    }
    cout << "\n";



    return 0;

}