import javax.swing.JFrame;

public class ViewCartman
{
     public static void main(String[] args)
     {
          JFrame frame = new JFrame();
          frame.setSize(500,600);
          frame.setTitle("display Cartman");
          frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          Cartman myCartman = new Cartman();
          frame.add(myCartman);
          frame.setVisible(true);
     }
}