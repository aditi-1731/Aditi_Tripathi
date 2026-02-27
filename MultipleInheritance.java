//Aditi Tripathi(2400320100070)
interface Phone {
    void makeCall();
    void sendSMS();
}
interface Camera {
    void takePhoto();
    void recordVideo();
}
class SmartPhone implements Phone, Camera {
    public void makeCall() {
        System.out.println("Calling...");
    }
    public void sendSMS() {
        System.out.println("Sending SMS...");
    }
    public void takePhoto() {
        System.out.println("Taking photo...");
    }

    public void recordVideo() {
        System.out.println("Recording video...");
    }
}
public class MultipleInheritance{
    public static void main(String[] args) {
        SmartPhone sp = new SmartPhone();
        sp.makeCall();
        sp.sendSMS();
        sp.takePhoto();
        sp.recordVideo();
    }
}