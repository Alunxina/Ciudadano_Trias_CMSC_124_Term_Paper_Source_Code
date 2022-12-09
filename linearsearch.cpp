 #include <iostream>
    using namespace std;

    void linear(int a[], int n, int arrsize) {
      int check = -999;
      for (int i = 0; i < arrsize; i++) {
        if (a[i] == n) {
          cout << "Position: " << i + 1 << endl;
          check = 0;
          break;
        }
      }
      if (check == -999) {
        cout << "Element does not exist." << endl;
      }
    }

    int main() {
      int arrsize;
      int input;

      cout << "Please enter array size:";
      cin >> arrsize;
      int arr[arrsize];

      cout << "Enter elements of the array:";
      for (int i = 0; i < arrsize; i++) {
        cin >> arr[i];
      }

      cout << "Enter element to search:";
      cin >> input;
      linear(arr, input,arrsize);
      return 0;
   }
