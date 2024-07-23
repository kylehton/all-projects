import java.util.Scanner;

public class e4_5
{
     public static void main(String[] args)
     {
          Scanner scan = new Scanner(System.in);
          System.out.println("Please enter your name: ");
          String name = scan.nextLine();
          System.out.println("Please enter your age: ");
          int age = scan.nextInt();
          System.out.println("Please enter your GPA: ");
          double gpa = scan.nextDouble();

          System.out.println("Name: "+name+"\nAge: "+age+"\nGPA: "+gpa);
     }
}