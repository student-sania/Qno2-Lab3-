// Q no:02
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter Row Size: ";
    cin >> n;
    cout << "Enter Column Size: ";
    cin >> m;
    int numbers[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> numbers[i][j];
        }
    }
    cout << "Diagonal Elements are: ";
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (i==j){
                cout << numbers[i][j] << " ";
            } 
        }
    }
    return 0;
}