#include <iostream>
#include <vector>
#include <queue>


/*
	 * A000788
	 * Total number of 1's in binary expansions of 0, ..., n. Also called humming weight
	 
	 * Algorithm:
	 * 1. Uses a queue to generate the sequence iteratively
	 * 2. For each new bit position, the previous sequence is repeated and each number
	 *    in the sequence gets an additional 1 (value + 1)
	
	 * Example :
		bits    sequence
		1  			 1
		2 			1 2
		3 		   1 2 2 3
		4 		  1 2 2 3 2 3 3 4
		...
*/
int main(){
	// n : number of iterations (0 to n)
	// s : sum of the sequence
	int n = 7, s = 0;
	
	// Queue to store and generate the sequence
	std::queue<int> memo;
	
	// Initialise the queue with 1
	memo.push(x);

	for(int i=0; i<n; i++){
		// Get the front element
			int front = memo.front();
		
		// Add front element to the sum
			s+=front;

		// Push current value and its increment
        memo.push(front);      // Original value
        memo.push(front + 1);  // Value with an additional 1 in binary
			
		// Remove the element	
			memo.pop();
	}
	
	cout << s;
	
	return 0;
}


