import javax.swing.JOptionPane;
public class e1_16
{
     public static void main(String[] args)
     {
          String name = JOptionPane.showInputDialog("What is your name?");
          JOptionPane.showMessageDialog(null, "Hello, "+name+"!");
          JOptionPane.showInputDialog("My name is Hal! What would you like me to do?");
          JOptionPane.showMessageDialog(null, "I'm sorry, "+name+". I cannot do that.");
     }
}
