/**
 *
 * @author Daniel Anani https://github.com/dandashino
 *
 */

#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

bool check_two_numbers_that_add_up_to_k(vector<int> &arr, int k)
{
    unordered_set<int> vals;

    for (int el : arr)
    {
        if (vals.count(k - el))
            return true;
        vals.insert(el);
    }

    return false;
}

int main()
{
    vector<int> input = {10, 15, 3, 5, 7};

    cout << check_two_numbers_that_add_up_to_k(input, 17) << endl << check_two_numbers_that_add_up_to_k(input, 100);
}