#include <iostream>

int main()
{
    int courses;
    int subjects;
    int **report;

    std::cout << "Enter the number of courses: ";
    std::cin >> courses;

    // Create row
    report = new int *[courses];

    // Fill loop
    for (int i = 0; i < courses; i++)
    {
        // Fill in the rows with pointers
        std::cout << "[Course " << i + 1 << "]" << std::endl;

        // Ask how many subjects
        std::cout << "Enter the number of subjects to grade: ";
        std::cin >> subjects;

        // Create column
        report[i] = new int[subjects];

        for (int j = 0; j < subjects; j++)
        {
            // Fill in the grades
            int grades;
            std::cout << "Enter grades for subject " << j + 1 << ": ";
            std::cin >> grades;
            report[i][j] = grades;
        }

        // Create new line
        std::cout << std::endl;
    }

    std::cout << "Results:" << std::endl;

    // Print loop
    for (int i = 0; i < courses; i++)
    {
        std::cout << "[Course " << i + 1 << "]" << std::endl;

        for (int j = 0; j < subjects; j++)
        {
            std::cout << "Subject " << j + 1 << ": " << report[i][j] << std::endl;
        }

        // Create new line
        std::cout << std::endl;
    }

    // Deletion loop
    for (int i = 0; i < courses; i++)
        delete[] report[i];
    delete[] report;

    return 0;
}