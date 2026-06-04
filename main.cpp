#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 35, 85, 65, 70};

    int maxm = arr[0];
    int sec_max = arr[0];

    for(int i = 0; i < 5; i++) {
        if(arr[i] > maxm) {
            sec_max = maxm;
            maxm = arr[i];
        }

        else if(arr[i] > sec_max && arr[i] != maxm) {
            sec_max = arr[i];
        }
    }

    cout << "Second Largest Element is: " << sec_max << endl;

    return 0;
}
