#include <iostream>
using namespace std ;

void BubbleSort ( int a[] , int n){ // thuật toán BubbleSort 
    for ( int i = 0 ; i < n ; i++ ){
        for ( int j = i + 1 ; j < n ; j++ ){
            if ( a[i] > a[j] ){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main () {
    int n ; cin >> n; // khai báo biến và nhập só lượng mảng 
    int a[n];
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    BubbleSort(a,n); // truyền tham số cho hàm BubbleSort() 
    for ( int i = 0 ; i < n ; i++){
        cout << a[i] <<" "; 
    }
}
 
