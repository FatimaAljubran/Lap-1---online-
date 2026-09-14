/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> 
using namespace std;
int main()
{
double roomWidth, roomLength, roomArea; 
double tileSquareFeet, numOfTiles ;
cout<<"in Please enter the room width in feet : "; 
cin>> roomWidth;
cout<<"in Please enter the room length in feet: "; 
cin>> roomLength;
roomArea = roomWidth * roomLength;
cout<<"In The area of the room = "<< roomArea <<" square feet";
tileSquareFeet = (6.0 / 12) * (6 / 12.0);
numOfTiles = roomArea / tileSquareFeet;
cout<<"in the number of 6-inch square tiles needed to tile the floor: "<< numOfTiles;
return 0;
}