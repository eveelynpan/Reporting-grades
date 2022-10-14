/* Author: Evelyn Pan
 * Assignment Title: Letter Grade
 * Assignment Description: 5 test scores: report the min,
 * max, median, avg, and grade
 * Due Date: 2/9/22
 * Date Created: 2/8/22
 * Date Last Modified: 2/9/22
*/

/* Data Abstraction: Output file stream is opened.
 * 5 variables, s1, s2, s3, s4, s5, are initialized
 * for use with their counterparts in the program.
 *
 // Input: The program reads input as the precursor.
 * from the user and assigns the integers
 * to their respective variables.
 *
 // Process:
 * The five test scores are entered, the avg is calculated,
 * and the if statements are organized from s1 to s5,
 * along with the grades.
 *
 //Output:
 * The or statements are printed to the screen, along with
 * the avg, grade, min, max, and median.
 *
 // Assumptions:
 * It is assumed that:
 * the user wants to input 5 numbers,
 * the user wants to view their avg, grade, min, max, and median.
 * and having been prompted to do so, the user will correctly input data.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // Data Abstraction:
    double s1, s2, s3, s4, s5;
    double avg;
    char grade;
    
    //Input:

    //Process:
    cout << "Please Enter Five Test Scores." << endl;
        
    cout << setprecision(2);
    cout << fixed;
        
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    cout << s1 << " " << s2 << " " << s3 << " "
    << s4 << " " << s5 << endl << endl;
    
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    
    //Sort
    if (s1 < s2) {
        swap(s1, s2);
    }
    
    if (s1 < s3) {
        swap(s1, s3);
    }
    
    if (s1 < s4) {
        swap(s1, s4);
    }
    
    if (s1 < s5) {
        swap(s1, s5);
    }
    
    if (s2 < s3) {
        swap(s2, s3);
    }
        
    if (s2 < s4) {
        swap(s2, s4);
    }
    
    if (s2 < s5) {
        swap(s2, s5);
    }
    
    if (s3 < s4) {
        swap(s3, s4);
    }
        
    if (s3 < s5) {
        swap(s3, s5);
    }
    
    if (s4 < s5) {
        swap(s4, s5);
    }
    
    if (avg >= 89.50) {
        grade = 'A';
    }
    else if (avg >= 79.50) {
        grade = 'B';
    }
    else if (avg >= 69.50) {
        grade = 'C';
    }
    else if (avg >= 59.50) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    
    //Output
    
    if (s1 < 0 || s1 > 100 || s2 < 0 || s2 > 100 || s3 < 0 || s3 > 100
    || s4 < 0 || s4 > 100 || s5 < 0 || s5 > 100) {
    cout << "ERROR" << ": " << "BAD DATA" << endl;
    }
    else {

    cout << "Average = " << avg << endl;
    cout << "Grade   = " << grade << endl;
    cout << "Min     = " << s5 << endl;
    cout << "Max     = " << s1 << endl;
    cout << "Median  = " << s3 << endl;
    }
    
    
    return 0;
    
}
