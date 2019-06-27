// #include <iostream>
// using namespace std;

// // main() is where program execution begins.
// int main() {
//    cout << "Hello World\n"; // prints Hello World
//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    cout << "Size of char : " << sizeof(char) << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// //variable declaration:
// extern int a, b;
// extern int c;
// extern float f;

// int main () {
//    // Variable definition:
//    int a, b;
//    int c;
//    float f;

//    // actual initialization
//    a = 10;
//    b = 20;
//    c = a + b;

//    cout << c << endl;

//    f = 70.0/3.0;
//    cout << f << endl;

//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//    cout << "Hello\tWorld\n\n";
//    return 0;
// }

// #include <iostream>
// using namespace std;

// #define LENGTH 10
// #define WIDTH 5
// #define NEWLINE '\n'

// int main() {
//    int area;

//    area = LENGTH * WIDTH;
//    cout << area;
//    cout << NEWLINE;
//    return 0;
// }

// #include <iostream>

// // Function declaration 
// void func(void);

// static int count = 10; /* Global variable */

// main() {
//    while(count--){
//       func();
//    }

//    return 0;
// }

// // Function definition
// void func ( void ) {
//    static int i = 6; // local static variable
//    i++;
//    std::cout << "i is " << i ;
//    std::cout << " and count is " << count << std::endl;
// }

// int max(int num1, int num2) {
//    // local variable declaration
//    int result;

//    if (num1 > num2)
//       result = num1;
//    else
//       result = num2;

//    return result;
   
// }

// #include <iostream>
// using namespace std;

// #include <iomanip>
// using std::setw;

// int main () {

//    int n[ 10 ]; // n is an array of 10 integers

//    // initialize elements of array n to 0
//    for (int i = 0; i < 10; i++) {
//       n[ i ] = i + 10; // set element at location i to i + 100
//    }
//    cout << "Element" << setw( 13 ) << "Value" << endl;

//    // output each array element's value
//    for ( int j = 0; j < 10; j++) {
//       cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
//    }

//    return 0;
// }

// #include <iostream>

// using namespace std;

// int main () {
//    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

//    cout << "Greeting message: ";
//    cout << greeting << endl;

//    return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main () {
//    string str1 = "Hello";
//    string str2 = "World";
//    string str3;
//    int len;

//    // copy str1 into str3
//    str3 = str1;
//    cout << "str3 : " << str3 << endl;

//    // concatenates str1 and str2
//    str3 = str1 + str2;
//    cout << "str1 + str2 : " << str3 << endl;

//    // total length of str3 after concatenation
//    len = str3.size();
//    cout << "str3.size() : " << len << endl;

//    return 0;
// }

// #include <iostream>

// using namespace std;
// int main () {
//    int var1;
//    char var2[10];

//    cout << "Address of var1 variable: ";
//    cout << &var1 << endl;

//    cout << "Address of var2 variable: ";
//    cout << &var2 << endl;

//    return 0;
// }

// #include <iostream>

// using namespace std;

// int main () {
//    int var = 20; // actual variable declaration.
//    int *ip; // pointer variable

//    ip = &var; // store address of var in pointer variable

//    cout << "Value of var variable: ";
//    cout << var << endl;

//    // print the address stored in ip pointer variable
//    cout << "Address stored in ip pointer variable: ";
//    cout << ip << endl;

//    // access the value at the address available in pointer
//    cout << "Value of *ip variable: ";
// }

// #include <iostream>

// using namespace std;

// int main () {
//    // declare simple variables
//    int i;
//    double d;

//    // declare reference variables
//    int& r = i;
//    double s = d;

//    i = 5;
//    cout << "Value of i : " << i << endl;
//    cout << "Value of i reference : " << s << endl;

//    return 0;
// } 

// #include <iostream>

// using namespace std;

// int main() {
//    char name[50];

//    cout << "Please enter your name: ";
//    cin >> name;
//    cout << "Your name is: " << name << endl;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// struct Books {
//    char title[50];
//    char author[50];
//    char subject[100];
//    int book_id;
// };

// int main() {
//    struct Books Book1; // Declare Book1 of type Book
//    struct Books Book2; // Declare Book2 of type Book

//    // book 1 specification
//    strcpy( Book1.title, "Learn C++ Programming");
//    strcpy( Book1.author, "Ambrose Byamu");
//    strcpy( Book1.subject, "Science");
//    Book1.book_id = 1;


//    // book 2 specification
//    strcpy( Book2.title, "The Art of War");
//    strcpy( Book2.author, "Kalamaji");
//    strcpy( Book2.subject, "Art");
//    Book2.book_id = 2;

//    // print Book1 info
//    cout << "Book 1 title : " << Book1.title << endl;
//    cout << "Book 1 author : " << Book1.author << endl;
//    cout << "Book 1 subject : " << Book1.subject << endl;
//    cout << "Book 1 id : " << Book1.book_id << endl;


//    // print Book2 info
//    cout << "Book 2 title : " << Book2.title << endl;
//    cout << "Book 2 author : " << Book2.author << endl;
//    cout << "Book 2 subject : " << Book2.subject << endl;
//    cout << "Book 2 id : " << Book2.book_id << endl;

//    return 0;
// }

// #include <iostream>

// using namespace std;

// class Box {
//    public:
//    double length;
//    double breadth;
//    double height;
// };

// int main() {
//    Box Box1; // declare Box1 of type Box
//    Box Box2; // declare Box2 of type Box
//    double volume = 0.0; // store the volume of a box here

//    //box 1 specification
//    Box1.height = 5.0;
//    Box1.length = 6.0;
//    Box1.breadth = 7.0;

//    // box 2 specification
//    Box2.height = 10.0;
//    Box2.length = 4.0;
//    Box2.breadth = 3.0;

//    // volume of box 1
//    volume = Box1.height * Box1.length * Box1.breadth;
//    cout << "Volume of Box1 : " << volume <<endl;

//    // volume of box 1
//    volume = Box2.height * Box2.length * Box2.breadth;
//    cout << "Volume of Box2 : " << volume <<endl;
//    return 0;
// }

#include <iostream>

using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }

   protected:
      int width;
      int height;
};

// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Derived class 
class Rectangle: public Shape, public PaintCost {
   public: 
      int getArea() {
         return (width * height);
      }
};

int main(void) {
   Rectangle Rect;
   int area;

   Rect.setWidth(5);
   Rect.setHeight(7);

   area = Rect.getArea();

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;

   return 0;
}