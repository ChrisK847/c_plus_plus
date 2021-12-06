#include <iostream> //Allows printing to console
#include <string> //Allows creation of string variables
#include <cstring> //Allows string function strstr
#include <array> //To use back() function to get last element in array
//#include "class_Rectangle.h"
#include "./class_Rectangle.cpp"
using namespace std; //Brings std into current scope to avoid restating std
#include <ctime> //Allows C date and struct functions

//Create Function
    int addition (int a, int b)
    {
        int r;
        r = a + b;
        return r;
    }

    int multiplication (int a, int b)
    {
        int r;
        r = a * b;
        return r;
    }

    void referenceFunction (int& x, int a)
    {
        x = 100;
        a = 200;

    }

    int& returnReference (int& i)
    {
        return i;
    }

//Create main part of script
int main()
{

    /*
        //decimal variables
            float annualSalary = 50000.99;
            float monthlySalary = annualSalary / 12;

        //string variables
            string userName = "Chris";

        //Print previous variables to screen
            cout << userName << ", your monthly salary was " << monthlySalary << "\nYour annual salary was " << annualSalary << endl;

        //Prompt user to enter new value
            cout << "Enter your new annual salary:";
            cin >> annualSalary;
            monthlySalary = annualSalary / 12;
            cout << userName << ", your new monthly salary is " << monthlySalary << endl;

        //Call Function
            int z;
            z = addition(annualSalary,10000);
            cout << z << endl;

        //For Loop
            for (int i = 0; i < 5; i++)
            {
                cout << "for " << i << endl;
            }

        //While Loop
            int i = 0;
            while(i < 10)
            {
                cout << "while " << i << endl;
                i++;
            };

        //Do loop
            int a = 0;
            do
            {
                cout << "do " << a << endl;
                a++;
            } while (a < 10);

    */

    /*
        //Constant Array - Single Dimension
            array<int,5> arr = {10,20,30,40,50};
        
        //Constant Array - Single Dimension
        //This might be C, rather than C++. arr.size() or .back() functions didn't work on these arrays.
            int arr1 [5] = {11,22,33,44,55};
            int arr2 [] = {11,22,33,44,55};

        //Change value in array
            arr[0] = 90;

        //Assign array element value to variable
            int b = arr[1];

        //Array Size
            cout << arr.size();

        //Print first element of array to console
            cout << arr[0] << endl;

        //Print last element of array to console
            cout << arr[arr.size()-1] << endl;

        
        //Print all values in array
            int i;
            for(i=0;i<arr.size();i++)
            {
                cout << arr[i] << endl;
            }
    */

    /*
        //Multidimensional Array - static
        //Notice that in the declaration, the size starts from 1, and not 0.
            array<array<int, 2>, 5> sheet {{{0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}}};
            //array<array<int, 3>, 3> arr = {{{5, 8, 2}, {8, 3, 1}, {5, 3, 9}}};

        //Print elements from multidimensional array to console
            for (int x = 0; x < sheet.size(); x++)
            {    

            
                //Prints each element on a newline
                for (int y = 0; y < sheet[0].size(); y++)
                {
                    cout << sheet[x][y] << endl;
                }
            

                //Prints inner arrays together, delimited by a commma
                cout << sheet[x][0] << ", " << sheet[x][1] << endl;


            }
    */
   /*
        //Classes - See source files class_Rectangle.h and class_Rectange.cpp
            Rectangle rect1;
            Rectangle rect2(7,19);
            cout << "rect1 area = " << rect1.area() << endl;
            cout << "rect2 area = " << rect2.area() << endl;
    */

   /*
        //Switch Statement
            string result;
            int userEntry;
            cout << "Enter a number 1 - 3" << endl;
            cin >> userEntry;
            switch (userEntry)
            {
                case 1:
                    result = "easy"; break;
                case 2:
                    result = "medium"; break;
                case 3:
                    result = "hard"; break;
                default:
                    result = "out-of-bounds"; break;
            }
                cout << "User picked " << result << endl;
                cout << sizeof(result) << endl;
    */    

    /*
        //Strings functions
            char str1[] = "The bunny hopped over the branch.";
            char str2[] = "over";
            cout << strstr(str1,str2) << endl;
    */

   /*

    //Pointers
        //Prefix * declares int pVar1 as a pointer (Pointer declaration)
        //Prefix & returns the memory address of var1 (Address-of operator)
        //We want the pointer value to be that of the variable memory address
        int var1 =10;
        int *pVar1 = &var1;
        
        //Do the same, but with an array
        //The pointer to an array is located at the first element in the array,
        //With C-style array, the variable name itself is the first element
        int var2[10] = {0,10,20,30,40,50,60,70,80,90};
        int *pVar2 = var2;

        //If using std::array, than I have to reference the first element, I CANNOT just reference variable name int *pVar2 = &var2
        array<int,10> var3 = {0,100,200,300,400,500,600,700,800,900};
        int *pVar3 = &var3[0];

        //Comparing address of variable, pointer value and value of address pointer points to
        cout << "Address of var1" << endl;
        cout << &var1 << " | " << pVar1 << " | " << *pVar1 << endl;
        cout << "address of var2" << endl;

        //With c-type array, to get the value of an element, using a pointer, you use dereference op, pointer name, and add int to get nth element
        cout << &var2 << " | " << pVar2 << " | " << *(pVar2 + 7) << endl;

        //The same goes with std:array
        cout << "Address of var3" << endl;
        cout << &var3 << " | " << pVar3 << " | " << *(pVar3 + 2) << endl;

        //The pointer value itself is the address of another variable
        cout << "pVar1 = " << pVar1 << endl;

        //Placing dereference operator before a pointer returns value located at its memory address
        cout << "*pVar1 = " << *pVar1 << endl;

        //The Pointer itself has it's own memory address separate from the one it's pointing to
        cout << "&pVar1 = " << &pVar1 << endl;

        //A c-type array's name by itself, acts as a pointer to the first element
        cout << "var2 = " << var2 << endl;

        //A std::array's name by itself cannot be used as a pointer, so one must declare first element and use & sign
        cout << "&var3[0] = " << &var3[0] << endl;

        //Change the value of a variable through the pointer
        *pVar1 = 5;
        cout << var1 << endl;
        
        //Changing a pointer from one address to another
        int firstvalue = 5, secondvalue = 15;
        int * p1, * p2;

        p1 = &firstvalue;  // p1 = address of firstvalue
        p2 = &secondvalue; // p2 = address of secondvalue
        *p1 = 10;          // value pointed to by p1 = 10
        *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
        p1 = p2;           // p1 = p2 (value of pointer is copied)
        *p1 = 20;          // value pointed to by p1 = 20
        
        cout << "firstvalue is " << firstvalue << '\n';
        cout << "secondvalue is " << secondvalue << '\n';
    */

   //Reference Variables
        //These are essentially replications of an original variable
        //If you change the value of the reference, it changes the value of the original
        //Once initialized with an object, the reference can not be re-initialized to another object
        //If used as a function, such as int& func(), then the returned value must not go out of scope, so use static variables inside that function.
        //If used in that way, they can be used as a left side of an equation e.g.
            //double& setValues( int i ) {
            //    return vals[i];   // return a reference to the ith element
            //}
            //Reference: https://www.tutorialspoint.com/cplusplus/returning_values_by_reference.htm
            //Example:
            /*
                int x = 1; //The function will update the reference to x
                int a = 2; //The function will create new int a and update new int a
                cout << "prior to function" << endl;
                cout << "x = " << x << " | a = " << a << endl;
                referenceFunction(x, a);
                cout << "after function" << endl;
                cout << "x = " << x << " | a = " << a << endl;
            */    
            //It appears the arguments in a function are passed by value, if parameters don't create reference variables
            //The use for this might be that if the function is not returning a value, because it uses void, than
            //the function might instead be used for changing the value of an argument directly
            //If not using reference variables as parameters of a function, than we might want to include return statement
            // to return a value.

            /*
                //Returning a reference
                int i = 1;
                cout << "before function" << endl;
                cout << "i = " << i << endl;
                returnReference(i) = 2;
                cout << "after function" << endl;
                cout << "i = " << i << endl;
            */

   //Time and time formats
        /*
            https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
            The C++ standard library does not provide a proper date type. 
            C++ inherits the structs and functions for date and time manipulation from C. 
            To access date and time related functions and structures, you would need to include <ctime> header file in your C++ program.
        */

    //Prevent console from closing automatically. >0 stores default pause verbiage into a file named 0.
    system("pause>0");

    return 0;
};