#include <iostream> //Allows printing to console
#include <string> //Allows creation of string variables
#include <array> //To use back() function to get last element in array
//#include "class_Rectangle.h"
#include "./class_Rectangle.cpp"
using namespace std; //Brings std into current scope to avoid restating std

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
        //int b = arr[1];

        //Array Size
        //cout << arr.size();

        //Print first element of array to console
        //cout << arr[0] << endl;

        //Print last element of array to console
        //cout << arr[arr.size()-1] << endl;

        
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

   



    //Prevent console from closing automatically. >0 stores default pause verbiage into a file named 0.
    system("pause>0");

    return 0;
};