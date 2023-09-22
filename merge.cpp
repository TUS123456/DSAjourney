#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(int arr[],int start,int end){
	int mid=start+(end-start) / 2;
	int len1=mid-start+1;
	int len2=end-mid;
	
	int *leftarr=new int[len1];
	int *rightarr=new int[len2];
	
	
	int main_index=start;
	for(int i=0; i < len1; i++){
		leftarr[i]=arr[main_index++];
	}
	main_index=mid+1;
	for(int i=0; i < len2; i++){
		rightarr[i]=arr[main_index++];
	}
	int index1=0;
	int index2=0;
	main_index=start;
	
	while(index1 < len1 && index2 < len2){
		if(leftarr[index1] < rightarr[index2]){
			arr[main_index++]=leftarr[index1++];
		}
		else{
			arr[main_index++]=rightarr[index2++];
		}
	}
	
	while(index1 < len1){
		arr[main_index++]=leftarr[index1++];
	}
	
	while(index2 < len2){
		arr[main_index++]=rightarr[index2++];
	}
	
	/*delete[] leftarr;
	delete[] rightarr;
	/* int mid = start + (end - start) / 2; // Calculate the middle index correctly
    int length1 = mid - start + 1;
    int length2 = end - mid;

    int* first = new int[length1];
    int* second = new int[length2];

    int main_index = start;
    for (int i = 0; i < length1; i++) {
        first[i] = arr[main_index++];
    }
    main_index = mid + 1;
    for (int i = 0; i < length2; i++) { // Corrected to use length2
        second[i] = arr[main_index++];
    }

    int index1 = 0;
    int index2 = 0;
    main_index = start;
    while (index1 < length1 && index2 < length2) {
        if (first[index1] < second[index2]) {
            arr[main_index++] = first[index1++];
        }
        else {
            arr[main_index++] = second[index2++];
        }
    }
    while (index1 < length1) {
        arr[main_index++] = first[index1++];
    }
    while (index2 < length2) { // Corrected to use length2
        arr[main_index++] = second[index2++];
    }

    // Free the dynamically allocated memory
    delete[] first;
    delete[] second;*/
}
void merge_sort(int arr[],int start,int end){
	cout<<start<<" "<<end<<endl;
	
	
	if(start >= end){
		return;
	}
	
	int mid=start+(end-start) / 2;
	cout<<mid<<endl;
	merge_sort(arr,start,mid);
	merge_sort(arr,mid+1,end);
	
	merge(arr,start,end);
	
	/*if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    // left part sorted
    mergesort(arr, start, mid);
    // right part sorted
    mergesort(arr, mid + 1, end);
    merge(arr, start, end);*/
}
int main() {

    int arr[10] = {2, 31, 45, 6, 8, 8, 2, 3, 1};
    
    int end = 9;
    merge_sort(arr, 0, end);

    cout << endl;
    for(int i=0; i<=end; i++){
    	cout<<arr[i]<<" ";
	}
    /* int arr[10] = {2, 31, 45, 6, 8, 8, 2, 3, 1};
    int size = 9;

    mergesort(arr, 0, size);

    cout << endl;
    for (int i = 0; i <= size; i++) { // Loop should run until size
        cout << arr[i] << " ";
    }
    cout << endl;*/
}
/*#include<iostream>
using namespace std;

void merge(int arr[], int start, int end) {
    int mid = start + (end - start) / 2; // Calculate the middle index correctly
    int length1 = mid - start + 1;
    int length2 = end - mid;

    int* first = new int[length1];
    int* second = new int[length2];

    int main_index = start;
    for (int i = 0; i < length1; i++) {
        first[i] = arr[main_index++];
    }
    main_index = mid + 1;
    for (int i = 0; i < length2; i++) { // Corrected to use length2
        second[i] = arr[main_index++];
    }

    int index1 = 0;
    int index2 = 0;
    main_index = start;
    while (index1 < length1 && index2 < length2) {
        if (first[index1] < second[index2]) {
            arr[main_index++] = first[index1++];
        }
        else {
            arr[main_index++] = second[index2++];
        }
    }
    while (index1 < length1) {
        arr[main_index++] = first[index1++];
    }
    while (index2 < length2) { // Corrected to use length2
        arr[main_index++] = second[index2++];
    }

    // Free the dynamically allocated memory
    delete[] first;
    delete[] second;
}

void mergesort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    // left part sorted
    mergesort(arr, start, mid);
    // right part sorted
    mergesort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main() {
    int arr[10] = {2, 31, 45, 6, 8, 8, 2, 3, 1};
    int size = 9;

    mergesort(arr, 0, size);

    cout << endl;
    for (int i = 0; i <= size; i++) { // Loop should run until size
        cout << arr[i] << " ";
    }
    cout << endl;
}*/

