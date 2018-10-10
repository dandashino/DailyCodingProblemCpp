/**
 *
 * @author Daniel Anani https://github.com/dandashino
 *
 */

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> product_of_all_except_self(vector<int> &arr) 
{
	vector<int> solution;
	
	int sum = 1, size = arr.size();
	//this will get everything to the left of arr[i]
	for(int i=0; i<size; i++)
	{
		solution.push_back(sum);
		sum *= arr[i];
	}
	
	sum = 1;
	
	//this will get everything to the right of arr[i]
	for(int i=size-1; i>=0; i--) 
	{
		solution[i] *= sum;
		sum *= arr[i];
	}
	
	return solution;
}
  
int main() {

	vector<int> arr = {1,2,3,4,5};
	
	vector<int> solution = product_of_all_except_self(arr);
	
	for(int i: solution)
		cout << i << endl;

	return 0;
}