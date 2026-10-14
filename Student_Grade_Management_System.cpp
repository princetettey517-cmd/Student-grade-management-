#include <iostream>
#include <string>
using namespace std;

int main() {
    // Arrays store the subjects and the marks entered by the user.
    string subjects[5] = {
        "Mathematics",
        "English",
        "Science",
        "ICT",
        "Social Studies"
    };

    float marks[5];
    float total = 0;
    float average;

    cout << "STUDENT GRADE MANAGEMENT SYSTEM\n";
    cout << "Enter marks from 0 to 100 for each subject.\n\n";

    // Enter and validate marks.
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid mark. Enter a value from 0 to 100: ";
            cin >> marks[i];
        }

        total += marks[i];
    }

    // Calculate the average mark.
    average = total / 5;

    // Display the student's results.
    cout << "\n--- STUDENT RESULTS ---\n";
    for (int i = 0; i < 5; i++) {
        cout << subjects[i] << ": " << marks[i] << '\n';
    }

    cout << "Total Marks: " << total << "/500\n";
    cout << "Average Mark: " << average << "%\n";

    // Demonstration pass rule: average of 50% or above.
    if (average >= 50) {
        cout << "Status: PASS\n";
    } else {
        cout << "Status: FAIL\n";
    }

    return 0;
}
