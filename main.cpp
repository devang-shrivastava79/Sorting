#include <bits/stdc++.h>
using namespace std;

#include "bubblesort.cpp"
#include "insertionsort.cpp"
#include "selectionsort.cpp"
#include "quicksort.cpp"
#include "mergesort.cpp"

void display(const vector<int>& v){
    for(int x : v) cout << x << " ";
    cout << "\n";
}

int main(){
    vector<int> original = {91, 12, 45, 3, 77, 29, 64, 18, 50, 6};

    cout << "Original Array:\n";
    display(original);

    vector<int> arr;

    cout << fixed << setprecision(5);

    // Bubble Sort
    arr = original;
    auto t1 = chrono::high_resolution_clock::now();
    bubblesort(arr);
    auto t2 = chrono::high_resolution_clock::now();

    cout << "\nBubble Sort:\n";
    display(arr);
    cout << "Time: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Insertion Sort
    arr = original;
    t1 = chrono::high_resolution_clock::now();
    insertionsort(arr);
    t2 = chrono::high_resolution_clock::now();

    cout << "\nInsertion Sort:\n";
    display(arr);
    cout << "Time: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Selection Sort
    arr = original;
    t1 = chrono::high_resolution_clock::now();
    selectionsort(arr);
    t2 = chrono::high_resolution_clock::now();

    cout << "\nSelection Sort:\n";
    display(arr);
    cout << "Time: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Quick Sort
    arr = original;
    t1 = chrono::high_resolution_clock::now();
    quicksort(arr, 0, arr.size() - 1);
    t2 = chrono::high_resolution_clock::now();

    cout << "\nQuick Sort:\n";
    display(arr);
    cout << "Time: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    // Merge Sort
    arr = original;
    t1 = chrono::high_resolution_clock::now();
    mergesort(arr, 0, arr.size() - 1);
    t2 = chrono::high_resolution_clock::now();

    cout << "\nMerge Sort:\n";
    display(arr);
    cout << "Time: " << chrono::duration<double, milli>(t2 - t1).count() << " ms\n";

    return 0;
}