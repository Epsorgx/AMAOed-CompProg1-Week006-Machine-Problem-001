/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Enrollment Slip>
 * @app desc: <A program that Assesses students enrollment. It will ask for students name, program/course, year level,
 * and number of units enrolled then determine the corresponding year name of the student and rate per unit
 * then compute the tuition fee.>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    string firstName, middleInitial, lastName ;
    string course;
    int yearLevel;
    int ratePerUnit;
    float noOfUnits;
    float tuitionFee;
    float downPayment;
    float balance;
    float downPaymentRate;

    //Assign rate of Downpayment at 30%
    downPaymentRate = 30.00/100.00;
    cout << downPaymentRate;

    //Welcome address for user
    cout << "Welcome Student! " << endl;
    cout << "Kindly enter the  needed information: " << endl;

    //Ask for user input
    cout << "Student Name " << endl;
    cout << "\t First Name \t: ";
    getline(cin, firstName);
    cout << "\t Middle Initial\t: ";
    getline(cin, middleInitial);
    cout << "\t Last Name \t: ";
    getline(cin, lastName);

    cout << endl << "List of Offered Courses:" << endl;
    cout << "\t 1 - Bachelor of Science in Information Technology" << endl
         << "\t 2 - Bachelor of Science in Business Administration" << endl
         << "\t 3 - Bachelor of Science in Accountancy" << endl
         << "\t 4 - Bachelor of Science in Education" << endl << endl;
    
    cout << "Kindly enter the number corresponding to your course!" << endl;
    cout << "Program/Course \t: ";
    cin >> course;
    cout << "Year Level \t: ";
    cin >> yearLevel;
    cout << "No. of Units \t: ";
    cin >> noOfUnits;

    cout << endl << endl << "**************************************" << endl;
    cout << endl << "Congratulations!" << endl << "Your assessment is now complete." 
         << endl << "Kindly check the following details before proceeding to next step." << endl << endl;

    cout << "**************************************" << endl << endl;
    cout << "ENROLLMENT SLIP \n" << endl;
    cout << "Student Name \t: " <<firstName + " " + middleInitial + " " + lastName << endl;

    //Identify Program/Course based on value
    cout << "Program/Course \t: " ;
        if (course == "1")
            { 
                cout << "Bachelor of Science in Information Technology" << endl;
            }
                else if (course == "2")
                {
                    cout << "Bachelor of Science in Business Administration"  << endl;
                }
                else if (course == "3")
                {
                    cout << "Bachelor of Science in Accountancy"  << endl;
                }
                 else if (course == "4")
                {
                    cout << "Bachelor of Science in Education"  << endl;
                }
        else 
            {
            cout << "You entered an invalid input." << endl << "\t\t  Kindly retake the assessment."  << endl;
            }

    //Identify Year Name based on year level
    cout << "Year Name \t: " ;
        switch (yearLevel)
        {
            case 1: 
                cout << "Freshman" << endl;
                break;
            case 2: 
                cout << "Sophomore" << endl;
                break;
            case 3: 
                cout << "Junior" << endl;
                break;
            case 4: 
                cout << "Senior" << endl;
                break;
            case 5: 
                cout << "Senior" << endl;
                break;
            default:
                 cout << "You entered an invalid year level. "<< endl << "\t\t  Kindly retake the assessment." << endl;
                break;
        }

    cout << "No. of Units \t: " << noOfUnits << endl;

    //Compute for Tuition fee
    cout << "Tuition Fee \t: " ;
        //Idnetify Rate per Unt based on year level
        switch (yearLevel)
            {
                case 1: 
                    ratePerUnit = 1500;
                    break;
                case 2: 
                    ratePerUnit = 1800;
                    break;
                case 3: 
                    ratePerUnit = 2000;
                    break;
                case 4: 
                    ratePerUnit = 2300;
                    break;
                case 5: 
                    ratePerUnit = 2300;
                    break;
            
                default:
                    ratePerUnit = 0;
                    break;
            }
        tuitionFee = ratePerUnit * noOfUnits;
        cout << tuitionFee << endl;

    //Compute for Downpayment
    cout << "Down Payment \t: " ;
        downPayment = tuitionFee * downPaymentRate;
        cout << downPayment << endl;

    //Compute for Balance
    cout << "Balance \t: " ;
        balance = tuitionFee - downPayment;
        cout << balance << endl << endl;
        
    cout << "**************************************" << endl;
    cin.ignore();
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
