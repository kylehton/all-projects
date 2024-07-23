import java.util.Scanner;
import java.lang.Math;

public class e4_4
{
     public static void main(String[] args){
          Scanner scan = new Scanner(System.in);
          System.out.println("Please enter two values for sides of a rectangle: ");
          double side1 = scan.nextDouble();
          double side2 = scan.nextDouble();
          System.out.println("The area is: "+ side1*side2);
          System.out.println("The perimeter is: "+(2*side1+2*side2));
          System.out.println("The length of the diagonal is: "+(Math.sqrt(Math.pow(side1,2)+Math.pow(side2,2))));
     }
}