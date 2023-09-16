#include <iostream>
using namespace std ;
int main () {
    // tạo mảng 
    int n ; cin >> n ;
    int a[n];
    for ( int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    // thuật toán bubble sort 
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = i + 1 ; j < n ; j++ ){  // sử dụng 2 vòng for để quét qua các ptu của mảng 
            if (a[i] > a[j]){
                int temp = a[j];  // sử dụng biến phụ là temp để hoán đổi 2 số cho nhau 
                a[j] = a[i] ;
                a[i] = temp ;
            }
        }
    }
    // in ra các giá trị sau khi sắp xếp
    for ( int i = 0 ; i < n ; i++ ){
        cout << a[i] <<" ";
    }
}