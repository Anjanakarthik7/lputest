// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    
    int arr[3] = {1,2,3};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            cout << sum << endl;
        }
    }
    
    
    return 0;
}