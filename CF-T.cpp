#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mini=a;
    if(mini>b){
        mini=b;
    }
    if(mini>c){
        mini=c;
    }
    int maxi=a;
    if(maxi<b){
        maxi=b;
    }
    if(maxi<c){
            maxi=c;
    }
    int mid=a+b+c-mini-maxi;
    cout<<mini<<endl<<mid<<endl<<maxi<<endl;
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
