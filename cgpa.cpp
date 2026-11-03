#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numSubjects;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    vector<double> grades(numSubjects);
    double total = 0;

    for(int i=0; i<numSubjects; i++){
        cout << "Enter grade for subject " << i+1 << " (out of 10): ";
        cin >> grades[i];
        total += grades[i];
    }

    double cgpa = total / numSubjects;
    double percentage = cgpa * 9.5;

    cout << "\n--- Result ---\n";
    cout << "CGPA: " << cgpa << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
