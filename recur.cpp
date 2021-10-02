#include <iostream>
#include <stdio>
using namespace std;

int BinarySearch(int arr[], int num, int start, int last)
{
 int mid;

 if (start > last){

  cout << "Number is not found";
  return 0;

 } else {
  mid = (start + last) / 2;

  if(arr[mid] == num){

   cout << "Number is found at " << mid << " index \n";
   return 0;

  } else if (num > arr[mid]) {

   BinarySearch (arr, num, mid+1, last);

  } else if (num < arr[mid]) {

   BinarySearch (arr, num, start , mid-1);
  }
 }


}

int main() {

 int arr[100], num, i, n, start, last;

 cout <<"Enter the size of an array (Max 100) \n";
 cin >> n;

 cout <<"Enter the sorted values \n";

 for(i=0; i<n; i++) {

  cin >> arr[i];
 }

 cout <<"Enter a value to be search \n";
 cin >> num;

 start = 0;
 last = n-1;

 BinarySearch (arr, num, start, last);

 return 0;
}
