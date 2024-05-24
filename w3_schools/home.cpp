
/*
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
*/

// #include <iostream> // header file library
// using namespace std; 

/*
int main() {        // int main is called a function
  cout << "I am stupid!";    // << insert operator
  return 0;
}
*/

/*
int main() {
  cout << "hello world!" << endl;
  cout << "hello there new line";
  return 0;
}
*/

/*
    \\ is a back slash
    \t  is a horizontal tab
    \" is a double quote char

*/

/*
    int for small integers, long for large integers
    double for floats / decimal numbers
    char  single characters with single quotes
    string  double quotes
    bool   true or false

*/

/*
int main() {
  int number = 5673;
  cout << number;
  return 0;
}

*/

/*
  variable indentifers can contain _, letters, numbers
  can only start with _, letters
  no special chars
  case-sensitive
  can not conflict with reserved words such as int


int main() {
  int a = 1, b = 2, c = 3;
  cout << a + b + c;
  return 0;
}
*/


// #include <iostream>
// using namespace std;

/*
int main() {
  int x;
  cin >> x;
  cout << "You typed: " << x;
  return 0;
}
*/


// int main() {
//     int x = 29; // binary: 0001 1101
//     x &= 3;     // binary: 0000 0011
//                 // binary: 0000 0001
//     cout << "Result: " << x << endl; // Output: 31
//     return 0;
// }




// #include <string>
// #include <iostream>
// using namespace std;

// int main(){

//   string make = "Subaru ";
//   string model = "WRX";

//   string car = make.append(model);

//   cout << car.length() << endl;

//   cout << make << endl;

//   cout << car[0] << endl;

//   string txt = "\tIt\'s alright.\n";

//   cout << txt;

//   return 0;

// }

// #include <iostream>
// using namespace std;

// // int main() {
// //   string name;
// //   cout << "Please enter you name:\n";
// //   getline (cin, name);
// //   cout << "Hello " << name << "!\n";

// // }


// #include <iostream>
// using namespace std;
// #include <cmath>

// int main() {
//   cout << max(5,15) << endl;
//   cout << sqrt(64) << endl;
//   cout << round(2.6) << endl;
//   cout << log(2) << endl;
//   return 0;
// }

// #include <string>
// #include <iostream>
// using namespace std; 


// int main() {
//   char letter;
//   cout << "Type a letter:\n";
//   cin >> letter;

//   switch(letter) {
//     case 'c':
//       cout << "This is function c!";
//       break;
//     case 'b':
//       cout << "This is function b!";
//       break;    
//     case 'd':
//       cout << "This is function d!";
//       break;
//     default: 
//       cout << "Letter '" << letter << "' not found";
//   }

//   return 0;
// }

// int main() {
//   string result = (5 > 4) ? "true" : "false";
//   cout << result;

//   return 0;
// }


// int main() {
//   int i = 0;
//   while (i < 5) {
//     cout << i << "\n";
//     i++;
//   }

//   return 0;
// }

// int main() {

//   string people[4] = {"Harry", "nuts", "with", "cheese"};

//   for (int i = 0; i < 4; i++){
//     cout << people[i] << endl;
//   }

//   cout << "\n" << "-----------------------" << "\n";

//   for (string person : people) {
//     cout << person << endl;
//   }

//   cout << "\n" << "-----------------------" << "\n";

// }

// #include <iostream>
// using namespace std;

// int main() {

//   string cars[5];
//   cars[0] = "Volvo";
//   cars[1] = "BMW";

//   for (string car : cars) {
//     cout << car << endl;
//   }

// }

// #include <iostream>
// using namespace std;

// int main () {

//   int houseNumbers[5][3][4] = {
//     {
//       {1, 2, 3, 4},
//       {5, 6, 7, 8},
//       {9, 9, 9, 9},
//     },
//     {
//       {1, 2, 3, 4},
//       {5, 6, 7, 8},
//       {9, 9, 9, 9},
//     },
//     {
//       {1, 2, 3, 4},
//       {5, 6, 7, 8},
//       {9, 9, 9, 9},
//     },
//     {
//       {1, 2, 3, 4},
//       {5, 6, 7, 8},
//       {9, 9, 9, 9},
//     },
//     {
//       {1, 2, 3, 4},
//       {5, 6, 7, 8},
//       {9, 9, 9, 9},
//     }
//   };

//   for (int i = 0; i < 5; i++) {
//     for (int j = 0; j < 3; j++) {
//       for (int k = 0; k < 4; k++) {
//         cout << houseNumbers[i][j][k] << endl;
//       }
//     }
//   }

// }


// #include <iostream>
// using namespace std;

// int main() {

//   struct {
//     string name;
//     int age;
//   } personOne, personTwo;

//   personOne.name = "Aaron";
//   personOne.age = 30;

//   personTwo.name = "Kelsea";
//   personTwo.age = 36;

//   cout << personOne.name << " is " << personOne.age << " years old." << endl;
//   cout << personTwo.name << " is " << personTwo.age << " years old." << endl;
// }


#include <iostream>
using namespace std;

void myFunction(string name) {
  cout << "Your name is: " << name;
}

int main() {
  myFunction("Bobby Boy");
}