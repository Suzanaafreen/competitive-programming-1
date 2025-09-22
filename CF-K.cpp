#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int min_val=a;
    if(b<min_val)
        min_val=b;
    if(c<min_val)
        min_val=c;

    int max_val=a;
    if(b>max_val)
        max_val=b;
    if(c>max_val)
        max_val=c;

    cout<<min_val<<" "<<max_val<<endl;

    return 0;
}
