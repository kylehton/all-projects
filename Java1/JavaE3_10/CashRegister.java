public class CashRegister
{
     private double purchase;
     private double payment;
     private double tax;
     private double taxRate;

     public CashRegister (double rate)
     {
          purchase = 0;
          payment = 0;
          tax = 0;
          taxRate = rate;
     }
     
     public void recordPurchase(double amount)
     {
          purchase = purchase + amount;
     }

     public void receivePayment(double amount)
     {
          payment = payment + amount;
     }

     public double giveChange()
     {
          double change = payment - purchase - tax;
          purchase = 0;
          payment = 0;
          tax = 0;
          return change;
     }

     public void recordTaxablePurchase(double amount)
     {
          purchase = purchase + amount;
          tax = tax + amount * taxRate;
     }

     public double getTotalTax()
     {
          return tax;
     }
}