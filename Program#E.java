/*  Create a class Student with private attributes like rollNumber, name, and grade. Use getter and setter methods to access and modify these attributes.

Name:Shibin M S
Name:111
Name:A+
          */

class Main {
    public static void main(String [] args)
    {
        Student s1=new Student();
        s1.setrollNumber(111);
        s1.setName("Shibin M S");
        s1.setGrade("A+");
        System.out.println("Name:"+s1.getName());
        System.out.println("Name:"+s1.getrollNumber());
        System.out.println("Name:"+s1.getGrade());
    }
}
class Student {
    private int rollNumber;
    private String name;
    private String grade;
    
    public int getrollNumber(){
        return rollNumber;
    }
    public String getName(){
        return name;
    }
    public String getGrade(){
        return grade;
    }
    public void  setrollNumber(int rollNumber){
        this.rollNumber=rollNumber;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setGrade(String grade){
        this.grade=grade;
    }
}
