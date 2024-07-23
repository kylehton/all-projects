import javax.swing.JOptionPane;

public class e4_7 
{
     public static void main(String[] args) {

          String strNum = JOptionPane.showInputDialog("Enter a number");

          double num= Double.parseDouble(strNum);
          double sqrNum = Math.pow(num, 2);
          double cubeNum = Math.pow(num, 3);
          double quartNum = Math.pow(num, 4);

          String result="The square of " + num + " is " + sqrNum + "\r\nThe cube of " + num + " is " +  cubeNum + "\r\nThe 4th power of the  " + num + " is " + Math.pow(num, 4);
          JOptionPane.showMessageDialog(null, result);
       }
}