#include <iostream>

using namespace std;

int arr[150];

int bubblesort(){
    while(true){
        int pos1;
        int pos2;
        int sorted = 0;
        for(int i = 0; i<149; i++){
            if(arr[i] > arr[i+1]){
                arr[i] = arr[i] + arr[i+1];
                arr[i+1] = arr[i] - arr[i+1];
                arr[i] = arr[i] - arr[i+1];
                sorted++;
            }
        }
        if(sorted == 0){
            break;
        }
    }

}

int main()
{
    for(int i = 0; i<150; i++){
        arr[i] = (rand() % 1000) + 1;
    }

    bubblesort();
    for(int i = 0; i < 150; i++){
        cout<<arr[i]<<",\n";
    }
    return 0;
}
