#include <iostream>
using namespace std ;

void BubbleSort ( int a[] , int n ) {
  int i, j ;
  for ( int i = 0 ; i < n - 1 ; i++ ){
    for ( int j = 1 ; j < n - i - 1 ; j++ ){
      if(a[j] > a[j+1]){
        int temp = a[j] ;
        a[j] = a[j+1] ;
        a[j+1] = temp ; 
      }
    }
  }
}
      
