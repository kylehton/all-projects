import javax.swing.JFrame;
public class ViewCuteFace
{
     public static void main(String[] args)
     {
          JFrame frame = new JFrame();
          frame.setSize(500,600);
          frame.setTitle("display cute face");
          frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
          CuteFace myFace = new CuteFace();
          frame.add(myFace);
          frame.setVisible(true);
     }
}