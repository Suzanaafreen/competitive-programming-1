#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=5;i++){
        cin>>n;
        if(n%2==0)
        {
            even+=1;
        }
        if(n%2!=0){
            odd+=1;
        }
        if(n>0){
            pos+=1;
        }
        if(n<0){
            neg+=1;
        }
    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;
    return 0;
}
