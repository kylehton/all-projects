import java.lang.Math;
public class e1_4
{
     public static void main(String[] args) {
          double balance = 1000.00;
          final double interestRate = 0.05;
          for (int i = 1; i <= 3; i++)
          {
               balance += (balance*interestRate);
               System.out.println("The balance for year "+i+" is: "+(Math.round(balance*100.0))/100.0);
          }

     }
}