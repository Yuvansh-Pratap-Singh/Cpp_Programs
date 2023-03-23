#include<iostream>
using namespace std;
int main(){
    int principle,rate,time;
    cout<<"*** Calculate Simple Interest ***"<<endl;
    cout<<"Enter the Principle amount :"<<endl;
    cin>>principle;
    cout<<"Enter the Interest rate :"<<endl;
    cin>>rate;
    cout<<"Enter the Time period :"<<endl;
    cin>>time;
    int si = (principle*rate*time)/100;
    cout<<"Simple Interest : "<<si;

}