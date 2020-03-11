#include<iostream>

using namespace std;
// Function for printing Array
void print_arr(int arr[], int n){

    for(int i = 0; i <n; i++)

    {

        cout << arr[i] << " ";

    }

    cout << endl;

}
//function to swap element
void swap(int *ux, int *up)  {  
    int temp = *ux;  
    *ux = *up;  
    *up = temp;  
}  
  
// Selection sort function
void Selection_Sort(int *arr, int n){
     
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);  
    }

}
//Main execution code
int main(){
    

     int unsorted_numbers[10] = {65, 87, 36, 100, 283, 46, 28, 78, 76, 28};

    cout << "Selection Sort Test\n";

    cout << "Unsorted Numbers: ";

    print_arr(unsorted_numbers, 10);

    Selection_Sort(unsorted_numbers, 10);

    cout << "Sorted Numbers:   ";

    print_arr(unsorted_numbers, 10);

    cout << endl;

    return 0;
}



