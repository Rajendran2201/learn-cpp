// let's try printing the details of a wedding with our learnings so far.

/*
-- Basic Details in a wedding invitation --

Bride
  -  name
  -  qualification
  -  occupation
Groom
  -  name
  -  qualification
  -  occupation

Common 
  - venue / location
  - time 
  - date 

- welcome message 


Let's start coding the wedding invitation

*/


#include <iostream>
using namespace std;

int main(){

  string brideName = "Alya";
  string brideOccupation = "Fashion Designer";
  string brideQualification = "Masters";

  string groomName = "Aswin";
  string groomOccupation = "Architect";
  string groomQualification = "Bachelors";

  string venue = "SV Mahal, Banglore";
  string date = "17/08/2025";
  string time = "06:00 - 07:30"; 

  string welcomeMessage = "We cordially welcome our friends and family to share your blessings!";


  cout << brideName << " weds " << groomName << endl;

  cout << brideName << " has completed " << brideQualification << " and working as a " << brideOccupation << endl;
  cout << groomName << " has completed " << groomQualification << " and working as a " << groomOccupation << endl;

  cout << "The marriage will take place on " << date << " in " << venue << " during " << time << endl;
  cout << welcomeMessage;

  return 0;
}


/*

Output: 


Alya weds Aswin
Alya has completed Masters and working as a Fashion Designer
Aswin has completed Bachelors and working as a Architect
The marriage will take place on 17/08/2025 in SV Mahal, Banglore during 06:00 - 07:30
We cordially welcome our friends and family to share your blessings!% 

*/