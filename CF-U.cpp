#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;

    int int_part=(int)n;
    float dec_part=n-int_part;
    if(dec_part==0){
        cout<<"int "<<int_part<<endl;
    }
    else{
        cout<<"float "<<int_part<<" "<<dec_part<<endl;
    }

    return 0;
}
