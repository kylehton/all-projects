import javax.swing.JFrame;

public class OlympicRingViewer
{
     public static void main(String[] args)
     {
          JFrame frame = new JFrame();
          frame.setSize(300, 400);
          frame.setTitle("Olympic Rings");
          frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          OlympicRingComponent component = new OlympicRingComponent();
          frame.add(component);
          frame.setVisible(true);
     }
}