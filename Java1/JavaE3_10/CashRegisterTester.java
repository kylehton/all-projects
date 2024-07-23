public class CashRegisterTester
{
     public static void main (String[] args)
     {
          CashRegister register = new CashRegister(0.10);

          register.recordPurchase(29.50);
          register.recordTaxablePurchase(9.25);
          register.recordPurchase(4.00);
          register.recordTaxablePurchase(12.15);

          double totalTax = register.getTotalTax();

          System.out.println(totalTax);
          System.out.println("Expected: 2.14");
          register.receivePayment(58.00);

          double change = register.giveChange();
          System.out.println(change);
          System.out.println("Expected: 0.96");
     }
}