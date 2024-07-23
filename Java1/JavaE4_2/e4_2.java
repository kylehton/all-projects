import java.util.Scanner;

import javax.swing.JOptionPane;

public class e4_2 
{
     public static void main(String[] args) 
     {
          double num1, num2;          
          String strNum1, strNum2;

          strNum1 = JOptionPane.showInputDialog("Enter a number: ");
          num1 = Double.parseDouble(strNum1);

          strNum2 = JOptionPane.showInputDialog("Enter a second number: ");
          num2 = Double.parseDouble(strNum2);


          System.out.println("The sum of these two numbers is: "+(num1+num2));

     }

}