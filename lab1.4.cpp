#include <iostream>
using namespace std;
int main() {
    float sum,proizv,chast,a,b,raz;
    cout<<"Input chisla"<<endl;
    cin>>a>>b;
    a*=a;
    b*=b;
    sum=a+b;
    if (a>b){
    raz=a-b;}
    else {raz=b-a;}
    proizv=a*b;
    chast=a/b;
    cout<<"chastnoe="<<chast<<endl<<"raznost="<<raz<<endl<<"proizv="<<proizv<<endl<<"summ="<<sum<<endl;
    return 0;
}
