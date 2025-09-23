#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int year=n/365;
    int remaining_days=n%365;
    int month=remaining_days/30;
    int days=remaining_days%30;
    cout<<year<<" years"<<endl<<month<<" months"<<endl<<days<<" days"<<endl;
    return 0;
}
