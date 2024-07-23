import javax.swing.JFrame;
public class CarViewer
{
     public static void main(String[] args)
     {
          JFrame frame = new JFrame();
          frame.setSize(300, 400);
          frame.setTitle("Two Cars");
          frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          CarComponent component = new CarComponent();
          frame.add(component);
          frame.setVisible(true);
          /* only needs 1 component since that 1 component contains two Car objects in its component */
     }
}

