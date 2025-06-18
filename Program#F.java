/*   Create an interface Animal with methods eat() and sleep(). Implement this interface in classes Dog and Cat.

Dog eat bones
Dog sleeps in kennel
Cat eat fish
Cat sleeps in couch
*/

class Main {
    public static void main(String [] args)
    {
        Dog s1 = new Dog();
        Cat s2 = new Cat();
        s1.eat();
        s1.sleep();
        s2.eat();
        s2.sleep();
    }
}
interface Animal {
     void eat();
     void sleep();
}
class Dog implements Animal {
    public void eat(){
        System.out.println("Dog eat bones");
    }
    public void sleep(){
        System.out.println("Dog sleeps in kennel");
    }
}
class Cat implements Animal {
    public void eat(){
        System.out.println("Cat eat fish");
    }
    public void sleep(){
        System.out.println("Cat sleeps in couch");
    }
}
