#include <vector>
#include <iostream>

using namespace std;

int first_missing_positive_integer(vector<int> &arr)
{
    int size = arr.size();
    int idx = 0;

    for(int i=0;i<size; i++)
            if(arr[i] <= 0)
                swap(arr[i],arr[idx]), idx++;
    
    size -= idx;
    if(idx)
    	idx++; 

    for(int i=idx, j=0; j<size; i++,j++)
        if(abs(arr[i]) - 1 < size && arr[abs(arr[i])-1 + idx] > 0)
            arr[abs(arr[i]) - 1 + idx] = -arr[abs(arr[i]) - 1 + idx];

for(int i=idx, j=0; j<size; i++,j++)
     if(arr[i] > 0)
           return i - idx + 1;
            
    return size + 1;
}

int main() {
    vector<int> input = {3, 4, 5, 1,0 , -2, -4, -5};
    cout << first_missing_positive_integer(input);
}