# leetcode412
Overview :

This C++ solution implements the classic FizzBuzz problem, which is a common programming interview question. The program generates a sequence of strings based on the following rules:

For multiples of 3, print "Fizz"

For multiples of 5, print "Buzz"

For multiples of both 3 and 5, print "FizzBuzz"

For all other numbers, print the number itself

Solution Code:

The solution is implemented in the Solution class with a single public method fizzBuzz.

Class Structure

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // Implementation here
    }
};

Algorithm:

Initialize an empty vector to store results

Iterate from 1 to n:

Initialize an empty string

If current number is divisible by 3, append "Fizz"

If current number is divisible by 5, append "Buzz"

If string remains empty, convert the number to string

Add the string to result vector

Return the result vector

Example 

#include <iostream>
#include "Solution.h" // Assuming the class is in Solution.h
int main() {
    Solution sol;
    vector<string> result = sol.fizzBuzz(15);
    
    for (const auto& s : result) {
        cout << s << endl;
    }
    
    return 0;
}

Output 

Expected Output for n = 15

1

2

Fizz

4

Buzz

Fizz

7

8
Fizz

Buzz

11

Fizz

13

14

FizzBuzz

Complexity Analysis:

Time Complexity: O(n) - We perform a constant amount of work for each number from 1 to n

Space Complexity: O(n) - We store n strings in the result vector
