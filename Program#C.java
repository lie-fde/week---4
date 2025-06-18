/*  Create a class Vehicle with attributes like speed and fuelType. Create subclasses Car and Bike that inherit from Vehicle and add additional attributes.

Speed:60
fuelType:Petrol
Color:Red
-------------------
Speed:60
fuelType:Petrol
Color:Blue
   
   */

class Main {
    public static void main(String [] args)
    {   Car s1 = new Car();
        Bike s2 = new Bike();
        s1.display();
        s2.display();
    }
}
class Vehicle {
    int speed = 60;
    String fuelType = "Petrol";
}
class Car extends Vehicle {
    String color = "Red"; 
    void display(){
        System.out.println("Speed:"+speed);
        System.out.println("fuelType:"+fuelType);
        System.out.println("Color:"+color);
        System.out.println("-------------------");
    }
}
class Bike extends Vehicle {
    String color = "Blue"; 
    void display(){
        System.out.println("Speed:"+speed);
        System.out.println("fuelType:"+fuelType);
        System.out.println("Color:"+color);
    }
}
