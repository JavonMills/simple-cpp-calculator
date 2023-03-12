// iostream library is what allows the user to input while running

#include <iostream>
using namespace std;

// this is a simple addition function of 2 integers
int addition (int a , int b) {
  int sum = 0;
  sum = a + b;
  return sum;
}

// this is a simple subtraction function of 2 integers
int subtraction (int a , int b) {
  int sum = 0;
  sum = a - b;
  return sum;
}

// simple multiplcation function
int multi2 (int a , int b) {
  int sum = 0;
  sum = a * b;
  return sum;
}

// simple division function
int div2 (int a , int b) {
  int sum = 0;
  sum = a / b;
  return sum;
}

// pretty print for output
void pprint (int result){
  cout << "The Answer is : " << result << endl;
}

// this is the main function
int main() {

  int x , y;
  string options;
  // this prints "hello world" to the terminal
  cout << "Hello World! \n \n";
 

  cout << "Enter what function of the calculator you want to use : \n";
  // cout << "Addition ";
  cin >> options;

  
  cout << "Enter the first number :";
  // cin reads the input from the user known as see in
  cin >> x;
  cout << "Enter the second number :";
  cin >> y;

  
  if (options == "addition") {
    //int x , y = inputs ();
    int sum = addition (x , y);
    pprint(sum);
  } else if (options == "subtraction"){
    int sum = subtraction (x , y);
    pprint(sum);
  } else if (options == "multiplication"){
    int sum = multi2 (x , y);
    pprint(sum);
  } else if (options == "division"){
    int sum = div2 (x , y);
    pprint(sum);
  } 
  





  // the return 0 ends the main function with an empty return
  return 0;
}




