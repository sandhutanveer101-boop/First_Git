class Rectangle {

    // Instance variables
    double width, length, area;
    String color;

    // Method to set length
    void set_length(double l) {
        length = l;
    }

    // Method to set width
    void set_width(double w) {
        width = w;
    }

    // Method to set color
    void set_color(String c) {
        color = c;
    }

    // Method to calculate area 
    void find_area() {
        area = length * width;
    }
}

public class RectangleTest {

    public static void main(String[] args) {

        // Creating two Rectangle objects
        Rectangle r1 = new Rectangle();
        Rectangle r2 = new Rectangle();

        // Setting values for first rectangle
        r1.set_length(5);
        r1.set_width(4);
        r1.set_color("Red");
        r1.find_area();

        // Setting values for second rectangle
        r2.set_length(5);
        r2.set_width(4);
        r2.set_color("Red");
        r2.find_area();

        // Comparing area and color
        if (r1.area == r2.area &&
            r1.color.equals(r2.color)) {

            System.out.println("Matching Rectangles");

        } else {

            System.out.println("Non-Matching Rectangles");
        }
    }
}
