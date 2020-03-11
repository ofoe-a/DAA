#include<iostream>

using namespace std;
// Function for printing Array
void print_arr(int arr[], int arr_size)
{

    for(int i = 0; i < arr_size; i++)

    {

        cout << arr[i] << " ";

    }

    cout << endl;

}

// Sort an arr in ascending order 

void Bubble_Sort(int *arr, int arr_size,bool ascending)

{

    int temp = 0;



    //Order by ascending

    if (ascending)

    {

        for( int i = 0; i < arr_size; i++)

        {

            for(int j = 0; j < arr_size; j++)

            {

                if(arr[j] > arr[j + 1])

                {

                    //Swap Array Elementa

                    temp = arr[j];

                    arr[j] = arr[j + 1];

                    arr[j + 1] = temp;

                }

            }

        }

        return;

    }

    //Order by descending

    else

    {

        for( int i = 0; i < arr_size; i++)

        {

            for(int j = 0; j < arr_size; j++)

            {

                if(arr[j] < arr[j + 1])

                {

                    //Swap Array Elementa

                    temp = arr[j];

                    arr[j] = arr[j + 1];

                    arr[j + 1] = temp;

                }

            }

        }



    }



    return;

}

int main (void) {
     int unsorted_numbers0[10] = {65, 87, 36, 100, 283, 46, 28, 78, 76, 28};

    cout << "Bubble Sort Ascending Test\n";

    cout << "Unsorted Numbers: ";

    print_arr(unsorted_numbers0, 10);

    Bubble_Sort(unsorted_numbers0, 10, true);

    cout << "Sorted Numbers: ";

    print_arr(unsorted_numbers0, 10);

    cout << endl;

    return 0;
}