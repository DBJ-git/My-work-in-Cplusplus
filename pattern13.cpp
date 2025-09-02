#include<iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 0 ; i < n ; i++){       //UPPER LOOP

        for(int j = 0 ; j < (i + 1) ; j++){
            cout << '*';
        }

        for(int j = 0 ; j < 2*(n-i-1) ; j++){
            cout << " ";
        }

        for(int j = i+1 ; j > 0 ; j--){
            cout << '*';
        }

        cout << endl;
    }

  for(int i = 0 ; i < n ; i++){       //LOWER LOOP
      
      for(int j = n - i ; j > 0 ; j--){
          cout << '*';
      }

      for(int j = 0; j < 2*i ; j++){
          cout << " ";
      }

      for(int j = n-i ; j > 0 ; j++){
          cout << '*';
      }

      cout << endl;

}
    return 0;
}
