import java.util.Scanner;

public class e4_10
{
     public static void main(String[] args)
     {
          Scanner scan = new Scanner(System.in);
          System.out.println("Please enter a 5 digit number: ");
          int fiveDigitNum = scan.nextInt();
          
          System.out.println(fiveDigitNum/10000+" ");
          fiveDigitNum = fiveDigitNum%10000;

          System.out.println(fiveDigitNum/1000+" ");
          fiveDigitNum = fiveDigitNum%1000;

          System.out.println(fiveDigitNum/100+" ");
          fiveDigitNum = fiveDigitNum%100;

          System.out.println(fiveDigitNum/10+" ");
          fiveDigitNum = fiveDigitNum%10;

          System.out.println(fiveDigitNum+" ");

     }
}