/**
 *
 * @author Daniel Anani https://github.com/dandashino
 *
 */


#include <vector>
#include <climits>
#include <algorithm>
#include <iostream>

using namespace std;

int largest_prodcut_by_multiplying_three_integers(vector<int> numbers) 
{

    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i=0; i<numbers.size(); i++)
    {
        
        if( numbers[i] > max1)
            max3 = max2, max2 = max1, max1 = numbers[i];    

        else if (numbers[i] > max2) 
            max3 = max2, max2 = numbers[i];
        
        else if( numbers[i] > max3)
            max3 = numbers[i];
        
        if( numbers[i] < min1)
            min2 = min1, min1 = numbers[i];

        else if(numbers[i] < min2)
            min2 = numbers[i];
            
    }

    return max( max1 * max2 * max3, min1 * min2 * max1);
}

int main() {

    vector<int> vals = {-10, -10, 5, 2};

    cout << largest_prodcut_by_multiplying_three_integers(vals);

    return 0;
}