import java.util.Scanner;

public class e4_1
{
     public static void main(String[] args) 
     {
          Scanner scan = new Scanner(System.in);

          System.out.println("Please enter two numbers.");

          System.out.print("Number 1: ");
          int num1 = scan.nextInt();

          System.out.print("Number 2: ");
          int num2 = scan.nextInt();

          System.out.println("The sum of these two numbers is: "+(num1+num2));
          System.out.println("The difference of these two numbers is: "+(num1-num2));
     }
}