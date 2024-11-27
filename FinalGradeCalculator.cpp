/******************************************************************************
Name: Brooke Benator
Date: 02/02/2024
Assignment: Homework 2
Due Date: 02/05/2024
Class Section: 6
About this project: This tasks goals are to use if/else/switch statements as well as other basic I/O 
and outputting format
Assumptions: The user will put in correct numbers, as well as a correct Y/y or N/n for extra credit

All work below was performed by Brooke Benator

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << showpoint << setprecision(1);  //set numbers to show one decimal
    const int ASSIGNPTSPOSS = 700;                  //points possible for each grade
    const int MIDTERMPTSPOSS = 100;  
    const int REVELPTSPOSS = 500; 
    const int FINALPTSPOSS = 100;
    double assignpts;                               //user points earned on assignments
    double midtermpts;                              //user points on midterm
    double revelpts;                                //user points on revel
    double finalpts;                                //user points on final
    double finalaverage;                            //final grade as a number
    double extracredpts;                            //user extra credit points
    char extracred;                                 //user puts in Y or N for extra credit
    char lettergrade;                               //final grade as a letter
    
    //this section prompts user to put in amount of points they earned
    
    cout << "Assignment Points: ";              
    cin >> assignpts;
    cout << "Midterm Exam: ";
    cin >> midtermpts;
    cout << "Revel Points: ";
    cin >> revelpts;
    cout << "Final Exam: ";
    cin >> finalpts;
    cout << "Did you earn extra credit? (y/n): ";
    cin >> extracred;                                       //student inputs yes or no for extra credit
    
    //this section responds with grade if user does not have any extra credit points
    
    if(extracred=='N'||extracred=='n')
    {
        
        double A = ((revelpts/REVELPTSPOSS) * .1);                       //formula to calculate average
        double B = (((assignpts+extracredpts)/ASSIGNPTSPOSS) * .4);
        double C = ((midtermpts/MIDTERMPTSPOSS) * .2);
        double D = ((finalpts/FINALPTSPOSS) * .3);
        finalaverage = ((A + B + C + D)*100);
        cout << endl;
        cout << "Final Course Average: " << finalaverage << "%" << endl; //final average is shown
        
        //based on final average, program will respond with corresponding letter grade
        
        if(finalaverage>90)
        {
            lettergrade = 'A';
        }
        else if(finalaverage>80)
        {
            lettergrade = 'B';
        }
        else if(finalaverage>69)
        {
            lettergrade = 'C';
        }
        else if(finalaverage>60)
        {
            lettergrade = 'D';
        }
        else if(finalaverage<60)
        {
            lettergrade = 'F';
        }
        cout << "Final Course Letter Grade: " << lettergrade;
    }
    
    //this section calculates grade if extra credit was awarded
    
    else if(extracred == 'Y'||extracred =='y')
    {
        cout << "Extra credit points earned: ";
        cin >> extracredpts;                                            //user inputs amount of extra credit
        double A = ((revelpts/REVELPTSPOSS) * .1);                      //final average is calculated
        double B = (((assignpts+extracredpts)/ASSIGNPTSPOSS) * .4);
        double C = ((midtermpts/MIDTERMPTSPOSS) * .2);
        double D = ((finalpts/FINALPTSPOSS) * .3);
        finalaverage = ((A + B + C + D)*100);
        cout << endl;
        cout << "Final Course Average: " << finalaverage << "%" << endl;
        
        //letter grade is given based off of numerical average
        
         if(finalaverage>90)
        {
            lettergrade = 'A';
        }
        else if(finalaverage>80)
        {
            lettergrade = 'B';
        }
        else if(finalaverage>70)
        {
            lettergrade = 'C';
        }
        else if(finalaverage>60)
        {
            lettergrade = 'D';
        }
        else if(finalaverage<60)
        {
            lettergrade = 'F';
        }
        cout << "Final Course Letter Grade: " << lettergrade;
    }
    
    //if user does not put in Y/y or N/n for extra credit, invalid option message is presented
    else
    {
       cout << endl;
       cout << "Invalid option, exiting program.";
    }
    
    return 0;
}

