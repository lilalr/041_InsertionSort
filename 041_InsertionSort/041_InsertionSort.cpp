#include <iostream>
using namespace std;

int arr[9];
int i, n, temp, j;

void insertionSort() {  //prosedur
    int i, temp, j;

    for (i = 1; i <= n; i++) { //step 1

        temp = arr[i]; //step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j];            //step 4 a
            j--;                            // step 4b
        }
        arr[j + 1] = temp;      //step 5
    }
}

int main()
{

}

