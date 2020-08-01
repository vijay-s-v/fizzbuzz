#include <iostream>
#include <string>

using namespace std;

// 
int main(int argc, char * argv []){
	// Check for correct number of arguments
	if(argc != 2){ return 1; }
	int n = stoi(argv[1]);
	
	// Not elegant, but it works
	for(int i = 1; i <= n; i++){
	       if(i % 3 == 0 && i % 5 == 0){ cout << "Fizz Buzz" << endl; }
	       else if(i % 5 == 0){ cout << "Buzz" << endl; }
	       else if(i % 3 == 0){ cout << "Fizz" << endl; }
	       else{ cout << i << endl;}
	}
}
