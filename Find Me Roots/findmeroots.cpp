#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin>>n;
    while(n--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        long long int p, q, d;
        p = b*b;
        q = 4*a*c;
        d = p-q;
        if(d >= 0)
           count++;
    }

    cout<<count<<endl;

    return 0;
}