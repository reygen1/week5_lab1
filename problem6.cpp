#include <iostream>

int main() {
    int numberOfClasses;
    std::cout << "Enter number of classes: ";
    std::cin >> numberOfClasses;

    double totalQualityPoints = 0.0;
    int totalCredits = 0;


    for (int i = 1; i <= numberOfClasses; ++i) {
        int credits;
        double grade;

        std::cout << "\n--- subj " << i << " ---" << std::endl;
        std::cout << "Enter num of credits: ";
        std::cin >> credits;

        std::cout << "enter points for subj: ";
        std::cin >> grade;


        totalQualityPoints += grade * credits;
        totalCredits += credits;
    }


    double gpa = totalQualityPoints / totalCredits;


    std::cout << "GPA: " << gpa << std::endl;

    return 0;
}