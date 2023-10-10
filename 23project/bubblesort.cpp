#include <algorithm>

using namespace std;

void bubblesort(int array[], int arraylength){ // funciton for sorting array. takes 2 parameters(an array and the length of it)

    for (int numpasses = 0; numpasses < arraylength - 1; numpasses++){ // The outer loop runs for the length of the array - 1. 
    
    bool hasswapped = false; // Checks if elements have been swapped. if they haven't it breaks out

        for (int currentindex = 0; currentindex < arraylength - numpasses - 1; currentindex++){
        /* 
        1. starts by setting currentindex to 0
        2. makes condition that activates if the currentindex is less than the arraylength - passnum(numpasses) - 1
            - "arraylength - 1"(we compare the second to last element with the next element)
            - "-numpasses" with each pass of the outer loop, one more element gets sorted at the end
        3. After each comparison, we increase the currentindex by 1 to move on to the next pair of elements
        */
            if (array[currentindex] > array[currentindex + 1]) {
                swap(array[currentindex], array[currentindex + 1]);
                hasswapped = true;
    }       }
    if (!hasswapped) break;
    }

}