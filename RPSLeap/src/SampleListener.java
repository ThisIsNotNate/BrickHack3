import com.leapmotion.leap.*;

public class SampleListener extends Listener {

    public void onConnect(Controller controller) {
        System.out.println("Connected");
    }

    public void onFrame(Controller controller) {
        System.out.println("Frame available");
    }
}
