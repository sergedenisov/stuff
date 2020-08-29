#include <iostream>

using namespace std;
//formula: l-1-pos1 = pos2
int arr[6] = {34, 62, 692, 70, 283, 63};
int arrf[sizeof(arr)/4];


int flip(){
    int pos1 = 0;
    int pos2 = 0;

    for(int i = 0; i <= (sizeof(arr)/8); i++){
        pos1 = arr[i];
        pos2 = arr[(sizeof(arr)/4) - 1 - i];
        arrf[i] = pos2;
        arrf[(sizeof(arr)/4) - 1 - i] = pos1;
    }

}
int main()
{
    flip();
    for(int j = 0; j<sizeof(arr)/4; j++){
        cout<<arrf[j]<<" ";
    }
    return 0;
}
