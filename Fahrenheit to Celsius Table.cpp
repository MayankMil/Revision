#include<iostream>
using namespace std;


int main()
{

    int S,E,W;
    cin>>S>>E>>W;
    
    int C;
    
    while(S<=E)
    {
        C = ((S-32)*5)/9;
        cout<<S<<" "<<C<<endl;
        S=S+W;
    }
  
}
