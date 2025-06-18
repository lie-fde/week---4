/*   Create a class Car with attributes like model, color, and year. Create objects of this class and display their details.

Model:Mercedes-Benz SLS AMG
colour:Grey
Year:2011
*/

class Car {
    String model="Mercedes-Benz SLS AMG";
    String color="Grey";
    int year=2011;
    
    public static void main(String [] args)
    {
        Car s1 = new Car();
        System.out.println("Model:"+s1.model);
        System.out.println("colour:"+s1.color);
        System.out.println("Year:"+s1.year);
    }
}
