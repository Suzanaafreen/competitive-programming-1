#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,count=0;
    for(int i=1;i<=6;i++)
    {
        cin>>n;
        if(n>0)
        {
            count+=1;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    return 0;
}
