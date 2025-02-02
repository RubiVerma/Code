#include<stdio.h>
int main(){
  int arr[100] = {2,4,6,8,10};
  int size = 5;

   int newposition = 2;
   int newelemt = 6;
   for (int i = size - 1; i >= newPosition; i--) {
        arr[i + 1] = arr[i];
  }
    arr[newPosition] = newElement;
}
