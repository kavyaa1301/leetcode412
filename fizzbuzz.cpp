#include <iostream>
#include <vector>
#include <string>
using namespace std ;

class Solution {
public:
    
    vector<string> fizzBuzz(int n) {
      vector<string> result;
      
       
        for (int i = 1; i <= n; ++i) {
           
            string element;
          
            // If i is divisible by 3, append "Fizz" to the element string
            if (i % 3 == 0) {
                element += "Fizz";
            }
          
            // If i is divisible by 5, append "Buzz" to the element string
            if (i % 5 == 0) {
                element += "Buzz";
            }
          
           
            if (element.empty()) {
                element = to_string(i);
            }
          
            // Add the element string to the result vector
            result.push_back(element);
        }
      
        // Return the final result vector
        return result;
    }
};

