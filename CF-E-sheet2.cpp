#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    
    int a;
    cin>>a;
    int maxnum=a;
    
    for(int i=2;i<=num;i++)
    {
        int b;
        cin>>b;
        if(b>maxnum)
            maxnum=b;
    }
    cout<<maxnum<<endl;
    return 0;
}
