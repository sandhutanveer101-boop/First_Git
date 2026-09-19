public class StudentDetails {

    public static void main(String[] args) {

        // Arrays for 10 students
        String[] name = {
            "Aman", "Rahul", "Simran", "Neha", "Karan",
            "Priya", "Arjun", "Riya", "Manpreet", "Anjali"
        };

        int[] rollNo = {
            101, 102, 103, 104, 105,
            106, 107, 108, 109, 110
        };

        try {
            // Display student details
            for (int i = 0; i <= 10; i++) {
                System.out.println("Name: " + name[i] +
                                   ", Roll Number: " + rollNo[i]);
            }
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Array index is out of bounds.");
            System.out.println("Program continued without abnormal termination.");
        }
    }
}
