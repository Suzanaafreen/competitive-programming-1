#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,count=0,sum=0;
    for(int i=1;i<=6;i++)
    {
        cin>>n;
        if(n>0)
        {
            count+=1;
            sum+=n;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    cout<<setprecision(2)<<sum/count<<endl;
    return 0;
}
