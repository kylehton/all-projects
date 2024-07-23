import java.util.Scanner;
import java.lang.Math;

public class e4_3
{
     public static void main(String[] args)
     {
          Scanner scan = new Scanner(System.in);
          System.out.println("Please enter a radius value:");
          double radius = scan.nextDouble();
          double area = 3.14*Math.pow(radius, 2);
          double circum = 2*3.14*radius;
          double volume = (4/3)*3.14*Math.pow(radius, 3);
          double surfaceArea = 4*3.14*Math.pow(radius, 2);
          System.out.println("The area with this given radius is: "+area);
          System.out.println("The circumference with this given radius is: "+circum);
          System.out.println("The volume with this given radius is: "+volume);
          System.out.println("The surface area with this given radius is: "+surfaceArea);

     }
}