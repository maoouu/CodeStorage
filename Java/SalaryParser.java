import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

/**
 * SalaryParser.java
 * - this program parses a .txt file containing Employee first name, 
 * last name, current salary, and pay increase (in percent).
 * 
 * - the data in each line will be processed as object 'Employee',
 * which contains the respective properties and a method that calculates
 * the updated salary.
 * 
 * - the program outputs the First Name, Last Name, and the Updated Salary
 * of each employee.
 */


class Employee {
    private String lastName;
    private String firstName;
    private double currentSalary;
    private double percentIncrease;

    public Employee(String lastName, String firstName, double currentSalary, double percentIncrease) {
        this.lastName = lastName;
        this.firstName = firstName;
        this.currentSalary = currentSalary;
        this.percentIncrease = percentIncrease;
    }

    public String getLastName() {
        return this.lastName;
    }

    public String getFirstName() {
        return this.firstName;
    }

    public double getUpdatedSalary() {
        double addedSalary = this.currentSalary * (this.percentIncrease / 100.00);
        return this.currentSalary + addedSalary;
    }
}

class SalaryParser {
    
    public static void main(String[] args) {
        // Read .txt file and parse it as Arraylist of object Employee
        String filename = "Ch3_Ex7Data.txt";
        try {
            File file = new File(filename);
            ArrayList<Employee> employees = new ArrayList<Employee>();
            Scanner fileReader = new Scanner(file);
            // Read file line-by-line
            while(fileReader.hasNextLine()) {
                // Split the data by tabs (\t)
                String data[] = fileReader.nextLine().split(" ");
                String lastName = data[0];
                String firstName = data[1];
                double salary = Double.parseDouble(data[2]);
                double rate = Double.parseDouble(data[3]);
                Employee empObj = new Employee(lastName, firstName, salary, rate);
                employees.add(empObj);
            }
            fileReader.close();

            // Output (Print)
            for (Employee empObj : employees) {
                System.out.printf("Last Name: %s\n", empObj.getLastName());
                System.out.printf("First Name: %s\n", empObj.getFirstName());
                System.out.printf("Updated Salary: %.2f\n\n", empObj.getUpdatedSalary());
            }

        } catch (FileNotFoundException e) {
            System.out.print("An Error Has Occurred: ");
            e.printStackTrace();
        }
    }
}