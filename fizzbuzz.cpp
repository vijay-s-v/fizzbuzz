#include <iostream>
#include <string>
#include <chrono>

#define ITERATIONS 10000

using namespace std;

// Test different variations of solving the fizzbuzz problem to see which is the fastest
// Run the problem multiple times for each method to get an average time
int main(int argc, char * argv []){
	// Check for correct number of arguments
	if(argc != 2){ return 1; }
	int n = stoi(argv[1]);
	int time1 = 0, time2 = 0, time3 = 0;
	auto startTime = chrono::steady_clock::now();
	auto endTime = chrono::steady_clock::now();

	// Not elegant, but it works
	cout << "Begin method 1" << endl;
	for(int x = 1; x <= ITERATIONS; x++){
		startTime = chrono::steady_clock::now();
		for(int i = 1; i <= n; i++){
			if(i % 3 == 0 && i % 5 == 0){ cout << "FizzBuzz" << endl; }
			else if(i % 5 == 0){ cout << "Buzz" << endl; }
			else if(i % 3 == 0){ cout << "Fizz" << endl; }
			else{ cout << i << endl;}
		}
		endTime = chrono::steady_clock::now();
		time1 += chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
	}
	time1 = time1 / ITERATIONS;
	cout << "End method 1" << endl << endl;
	
	// See if only checking one condition improves speed
	cout << "Begin method 2" << endl;
	for(int x = 1; x <= ITERATIONS; x++){
		startTime = chrono::steady_clock::now();
		for(int i = 1; i <= n; i++){
			// Equivalent to checking if divisible by 3 and 5
			if(i % 15 == 0){ cout << "FizzBuzz" << endl; }
			else if(i % 5 == 0){ cout << "Buzz" << endl; }
			else if(i % 3 == 0){ cout << "Fizz" << endl; }
			else{ cout << i << endl;}
		}
		endTime = chrono::steady_clock::now();
		time2 += chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
	}
	time2 = time2 / ITERATIONS;
	cout << "End method 2" << endl << endl;

	// Use one less if statement and some string manipulation
	cout << "Begin method 3" << endl;
	for(int x = 1; x <= ITERATIONS; x++){
		startTime = chrono::steady_clock::now();
		for(int i = 1; i <= n; i++){
			string output = "";
			if(i % 3 == 0){ output += "Fizz"; }
			if(i % 5 == 0){ output += "Buzz"; }
			if(!output.empty()){ cout << output << endl; continue; }
			cout << i << endl;
		}
		endTime = chrono::steady_clock::now();
		time3 += chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
	}
	time3 = time3 / ITERATIONS;
	cout << "End method 3" << endl << endl;
	
	// Display results
	cout << "Method 1: " << time1 << "µs" << endl;
	cout << "Method 2: " << time2 << "µs" << endl;
	cout << "Method 3: " << time3 << "µs" << endl;	
}
