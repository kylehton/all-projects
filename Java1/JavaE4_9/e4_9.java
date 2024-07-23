import java.util.Scanner;

public class e4_9
{
     public static void main(String[] args)
     {
          Scanner scan = new Scanner(System.in);
          System.out.println("Please enter a value for meters: ");
          double meters = scan.nextDouble();
          double miles, feet, inches;
          miles = meters/1609.34;
          feet = meters/0.3048;
          inches = feet*12;
     }
}