
public class CashRegisterTester
{
     public static void main(String[] args)
     {
          double rate = 0.10;

          CashRegister register = new CashRegister(rate);
          
          register.recordPurchase(10.50);
          register.recordTaxablePurchase(29.50);
          register.recordPurchase(9.25);
          register.recordTaxablePurchase(50);

          double change = register.giveChange();
          int count = register.getItemCount();

          System.out.println(count);
          System.out.println("Expected: 3");
          System.out.println(change);
          System.out.println("Expected: 0.75");
     }
}