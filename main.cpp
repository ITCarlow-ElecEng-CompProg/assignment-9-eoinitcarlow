/*Eoin Finlay
  Sphere Calculation
  01 Nov 2017*/


//Preprocessor Directives
#include <iostream>
#include <math.h>
#define PI 3.141592654

using namespace std;

//Main Function
int main()
{
    //Local Function Declarations
   void sphere_cal(double, double*, double*);

   //Variable declarations
   double rad = 0, surA, vol;
   double *surA_ptr, *vol_ptr;

   //Assigning pointers to an address
   surA_ptr = &surA;
   vol_ptr = &vol;

   //while loop to ensure radius value is greater than zero
   while(rad<=0)
    {
        //prompting user to enter value for radius
        cout << "\n\nEnter a value greater than zero for the radius of the sphere: ";
        cin >> rad;
    }

    //calling function
    sphere_cal(rad, surA_ptr, vol_ptr);

    //displaying results
    cout << "\n\nSurface Area = " << surA <<endl;
    cout << "\nVolume = " << vol <<endl;

    return 0;
}

//sphere cal function header
double sphere_cal(double rad, double *surA_ptr, double *vol_ptr)
{
  //changing pointer values by way of an equation
  *surA_ptr = 4 * PI * pow(rad,2.0);
  *vol_ptr = (4.0 / 3.0) * PI * pow(rad, 3.0);

  return 0;
}
