#include <iostream>
using namespace std;
int main(){
// 1Example: Print Number Entered by User
// int num;
// cout <<"enter a num";
// cin>>num;
// cout << "You entered " << num; 

/////////2 find sum of 2 nums


// cout<<"enter tow nums:";
// int num1, num2 ;
// cout<< "enter1st num";
// cin>> num1 ;
// cout<<"enter 2st num";
// cin>> num2;
// cout<< "the total is "<<num1+num2;

// /////3 Example: Compute quotient and remainder
//    cout << "Enter dividend: ";

//     int dividend, divisor;
    
//     cin >> dividend;


//     cout << "Enter divisor: ";
//     cin >> divisor;

//     cout << "The quotient is: " << dividend / divisor ;
//     cout << "The remainder is: " << dividend % divisor ;
// //////4Find Size of a Variable

//  cout << "Size of char: " << sizeof(char) << " byte" << endl;
//     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
//     cout << "Size of float: " << sizeof(float) << " bytes" << endl;
//     cout << "Size of double: " << sizeof(double) << " bytes" << endl;
// ////5Swap Numbers
// int a=10;
// int b=20;
// int z;
//////////5
// cout<<"before the swapping a="<<a<<"b="<<b;
// z=a;
// a=b;
// b=z;
// cout<<"after the swapping a="<<a<<"b="<<b;
//////////6Example: Print ASCII Value in C++

// cout << "Enter a character: ";
// char a;

//  cin>>a;

//  cout << "ASCII Value of " << a << " is " << int(a);
///////7 

//   double num1, num2;

//   cout << "Enter two numbers: ";


//   cin >> num1 >> num2;
 
  
  

//   cout << "Product = " << num1*num2;    
    
///////8 check  even or odd




//   int n;

//   cout << "Enter an integer: ";
//   cin >> n;

//   if ( n % 2 == 0)
//     cout << n << " is even.";
//   else
//     cout << n << " is odd.";

//  ////////9Example: Check Vowel or a Consonant Manually

//  char c;
//  cout<<"enter char to check";
//  cin>> c;
//  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//  {
//     cout<<"the char is vowel";
//  }
//     else{
//         cout<<"the char isnt vowel";
//     }
  
 ////////10 find largest


    
    // double n1, n2, n3;

    // cout << "Enter three numbers: ";
    // cin >> n1 >> n2 >> n3;

    
    // if(n1 >= n2 && n1 >= n3)
    //     cout << "Largest number: " << n1;


    // else if(n2 >= n1 && n2 >= n3)
    //     cout << "Largest number: " << n2;
    
    
    // else 
    //     cout << "Largest number: " << n3;
  
    

///////11Sum of Natural Numbers using loop





    // int n, sum = 0;

    // cout << "Enter a positive integer: ";
    // cin >> n;

    // for (int i = 1; i <= n; ++i) {
    //     sum += i;
    // }

    // cout << "Sum = " << sum;
  ///////12


//   int year;
//   cout << "Enter a year: ";
//   cin >> year;

  
//   if (year % 400 == 0) {
//     cout << year << " is a leap year.";
//   }
 


//   else if (year % 100 == 0) {
//     cout << year << " is not a leap year.";
//   }



//   else if (year % 4 == 0) {
//     cout << year << " is a leap year.";
//   }
  

//   else {
//     cout << year << " is not a leap year.";
//   }



////////13 factorial

    // int n;
    // long factorial = 1.0;

    // cout << "Enter  integer: ";
    // cin >> n;

   
    
    //     for(int i = 1; i <= n; ++i) {
    //         factorial *= i;
    //     }
    //     cout << "Factorial of " << n << " = " << factorial;    
    
////  14  جدول الضرب ل رقم لحد 10
  
  int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }




    







return 0;
}
