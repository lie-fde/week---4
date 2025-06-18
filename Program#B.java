/*   Create a class Animal with a method sound(). Create subclasses Dog and Cat that override the sound() method to make specific sounds.

Cat Meows
Dog Bark


  */

class Main {
    public static void main(String [] args)
    {
        Cat s1 = new Cat();
        Dog s2 = new Dog();
        s1.sound();
        s2.sound();
    }
}
class Animal {
    void sound(){
        System.out.println("Sound");
    }
}
class Dog extends Animal {
    void sound(){
        System.out.println("Dog Bark");
    }
}
class Cat extends Animal {
    void sound(){
        System.out.println("Cat Meows");
    }
}
