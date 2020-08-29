#include <iostream>

using namespace std;

int fact(int n)
{
    int facte = 1;
    for(int i = 1; i <= n; i++){
        facte = facte * i;
    }
    cout<<facte;
}
int exp(int n)
{
    int expe = 1;
    for(int i = 1; i <= n; i++){
        expe = expe * n;
    }
    cout<<expe;
}

int main()
{
    int factin;
    cin>>factin;
    fact(factin);

    return 0;
}
