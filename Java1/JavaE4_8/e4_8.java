import java.util.Scanner;
import java.lang.Math;

public class e4_8
{
     public static void main(String[] args)
     {
          Scanner scan = new Scanner(System.in);
          System.out.println("Please enter an a, b, and c value for the quadratic equation: ");
          double a = scan.nextDouble();
          double b = scan.nextDouble();
          double c = scan.nextDouble();
          double root1 = ((b*-1)-Math.sqrt((Math.pow(b,2)-(4*a*c))))/(2*a);
          double root2 = ((b*-1)+Math.sqrt((Math.pow(b,2)-(4*a*c))))/(2*a);
          System.out.println("The solutions are: "+root1+" and "+root2);
     }
}