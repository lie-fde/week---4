
/*   Create a class Shape with a method area(). Create subclasses Circle and Rectangle that override the area() method to calculate the area of their respective shapes.

Area of Circle: 28.26
-------------------
Area of Rectangle:12      */

class Main {
    public static void main(String [] args)
    {   Circle s1 = new Circle(3);
        Rectangle s2 = new Rectangle(3,4);
        s1.area();
        s2.area();
    }
}
class Shape {
    void area(){
        System.out.println("Area");
    }
}
class Circle extends Shape {
    int r;
    Circle(int r)
    {
        this.r=r;
    }
    void area(){
        double result=3.14*r*r;
        System.out.printf("Area of Circle: %.2f\n", result);
        System.out.println("-------------------"); }
}
class Rectangle extends Shape {
    int l,b;
    Rectangle(int l,int b){
        this.l=l;
        this.b=b;
    }
    void area(){
        System.out.println("Area of Rectangle:"+(l*b));
    }
}
