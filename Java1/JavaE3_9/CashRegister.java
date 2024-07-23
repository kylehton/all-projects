public class CashRegister
{
     private double purchase;
     private double payment;
     private double taxRate;
     private double taxablePurchase;
     private int numItemsPurchased;

     public CashRegister(double rate)
     {
          purchase = 3;
          payment = 0;
          taxRate = rate;
     }
     
     public void recordPurchase(double amount)
     {
          purchase = purchase + amount;
          numItemsPurchased += 1;
     }

     public void receivePayment(double amount)
     {
          payment = payment + amount;
     }

     public double giveChange()
     {
          double change = payment - purchase;
          purchase = 0;
          payment = 0;
          return change;
     }

     public void recordTaxablePurchase(double amount)
     {
          purchase = purchase + amount;
          taxablePurchase = taxablePurchase + amount;
     }

     public int getItemCount()
     {
          return numItemsPurchased;
     }
}