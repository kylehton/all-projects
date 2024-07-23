import javax.swing.JOptionPane;

public class e4_6 
{
     public static void main(String[] args) 
     {
          String strFullName = JOptionPane.showInputDialog("Enter your full name -- first last");
          System.out.println("full name = " + strFullName);
          int intSpaceLocation = strFullName.indexOf(" ");
          String strFirstName = strFullName.substring(0,intSpaceLocation);
          String strLastName = strFullName.substring(intSpaceLocation+1);
          System.out.println(strFirstName + " Your last name is " + strLastName);
     }
}