#include <iostream>

using namespace std;

int arr[6] = {5,2, 48, 1, 100, 74};
int maxi;
int mini;

int findmax(){
    int maxnew = arr[0];
    for(int i = 0; i < (sizeof(arr)/4); i++){
        if(maxnew<arr[i]){
            maxnew = arr[i];
            maxi = maxnew;
        }
    }
}
int findmin(){
    int minnew = arr[0];
    for(int i = 0; i < (sizeof(arr)/4); i++){
        if(minnew>arr[i]){
            minnew = arr[i];
            mini = minnew;
        }
    }
}

int main()
{
    findmax();
    cout<<maxi<<" is the biggest number in the array"<<endl;
    findmin();
    cout<<mini<<" is the smallest number in the array";
    return 0;
}
