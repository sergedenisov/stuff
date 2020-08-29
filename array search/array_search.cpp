#include <iostream>

using namespace std;

int main()
{
    int arr[4] = {52, 28, 33, 86};
    int findi = 86;
    int pos = -1;
    for(int i = 0; i < (sizeof(arr)/4); i++){
        if(findi == arr[i]){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        cout<<findi+" does not exist in array"<< endl;
    } else{
        cout<<findi<<" is in position "<<pos<<" of the array"<<endl;
    }

    return 0;
}
