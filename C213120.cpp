#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1;
    ifstream in("input.txt");
    in>>n;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
    }
    if(n==1)    f=0;
    ofstream out("output.txt");
    if(f)
        out << n << " is a Prime Number" << endl;
    else
        out << n << " is a Composite Number" << endl;
}