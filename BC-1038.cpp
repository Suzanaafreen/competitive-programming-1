#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y;
    cin>>x>>y;
    if(x==1){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*4<<endl;
    }
    if(x==2){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*4.50<<endl;
    }
    if(x==3){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*5<<endl;
    }
    if(x==4){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*2<<endl;
    }
    if(x==5){
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*1.50<<endl;
    }
    return 0;
}
